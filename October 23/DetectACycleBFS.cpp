#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
using namespace std;
// } Driver Code Ends
class Solution
{

private:
    bool cyclecheck(vector<int> adj[], int vis[], int src)
    {
        vis[src] = 1;
        queue<pair<int, int>> q;
        q.push({src, -1});

        while (!q.empty())
        {
            int Currentnode = q.front().first;
            int Currentparent = q.front().second;
            q.pop();

            for (auto adjacent : adj[Currentnode])
            { // kaha kaha jayga
                if (!vis[adjacent])
                {
                    vis[adjacent] = 1;
                    q.push({adjacent, Currentnode});
                }
                else if (adjacent != Currentparent) // agal bagal wale ka parent ek hi hona chahiye right?
                {
                    return true;
                }
            }
        }
        return false;
    }

public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[])
    {
        // Code here
        int vis[V] = {0};

        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                if (cyclecheck(adj, vis, i))
                    return true;
            }
        }
        return false;
    }
};

//{ Driver Code Starts.
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends