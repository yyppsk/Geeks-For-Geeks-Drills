#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
using namespace std;
// } Driver Code Ends
class Solution
{
public:
    // Function to find minimum time required to rot all oranges.
    int orangesRotting(vector<vector<int>> &grid)
    {
        // okay using bfs because of obvious reasons as it well help
        // traversing the path in constant levels at the same time unit
        queue<pair<pair<int, int>, int>> q;
        int cntFresh = 0;
        int n = grid.size(), m = grid[0].size();
        int vis[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                vis[i][j] = 0;
            }
        }

        for (int i = 0; i < n; i++)
        {

            for (int j = 0; j < m; j++)
            {

                if (grid[i][j] == 2)
                {                        // current node is rotten
                    q.push({{i, j}, 0}); // will traverse from this rotten orange
                    vis[i][j] = 2;
                }
                // if not rotten then
                else
                {
                    vis[i][j] = 0;
                }
                if (grid[i][j] == 1) // count fresh oranges
                    cntFresh++;
            }
        }
        if (q.empty() && cntFresh > 0)
        {
            return -1; // No initially rotten oranges, and there are fresh oranges remaining
        }
        int time = 0;
        int cnt = 0;
        // bfs
        vector<pair<int, int>> delta = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
        while (!q.empty())
        {
            int row = q.front().first.first;
            int col = q.front().first.second;
            int t = q.front().second;
            time = max(time, t);
            q.pop();

            for (int i = 0; i < delta.size(); i++)
            {
                int neighbourRow = row + delta[i].first;
                int neighbourCol = col + delta[i].second;

                if (neighbourRow >= 0 && neighbourRow < n && neighbourCol >= 0 && neighbourCol < m && vis[neighbourRow][neighbourCol] == 0 && grid[neighbourRow][neighbourCol] == 1) // if fresh
                {
                    q.push({{neighbourRow, neighbourCol}, time + 1});
                    vis[neighbourRow][neighbourCol] = 2;
                    cnt++;
                }
            }
        }
        if (cnt != cntFresh)
            return -1;
        return time;
    }
};

//{ Driver Code Starts.
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m, -1));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.orangesRotting(grid);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends