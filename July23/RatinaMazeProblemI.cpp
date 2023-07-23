#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int dx[4] = {1, 0, 0, -1};
int dy[4] = {0, 1, -1, 0};
int direction[4] = {'D', 'L', 'R', 'U'};
bool isSafe(vector<vector<int>> &arr, int row, int col, int x, int y, vector<vector<bool>> &visited)
{
    // Inside of maze, is not visited, is 1
    if ((x >= 0 && x < row) && (y >= 0 && y < col) && (visited[x][y] == false) && (arr[x][y] == 1))
        return true;
    else
        return false;
}
void solveMaze(vector<vector<int>> &arr, int row, int col, int x, int y, vector<vector<bool>> &visited, vector<string> &path, string output)
{
    // BASE CASE
    if (x == row - 1 && y == col - 1)
    {
        // found the destination
        path.push_back(output);
        return;
    }
    // to check all the possible directions
    for (int j = 0; j < 4; j++)
    {
        int newX = x + dx[j];
        int newY = y + dy[j];
        char dir = direction[j];
        if (isSafe(arr, row, col, x, y, visited))
        {
            visited[newX][newY] = true;
            solveMaze(arr, row, col, x, y, visited, path, output + dir);
            visited[newX][newY] = false;
        }
    }
}
vector<string> findPath(vector<vector<int>> &m, int n)
{
    int row = n, col = n;
    vector<vector<bool>> visited(row, vector<bool>(col, false));
    vector<string> path;
    string output = "";
    visited[0][0] = true;
    solveMaze(m, row, col, 0, 0, visited, path, output);
    for (auto i : path)
    {
        cout << i << " ";
    }
    return path;
}
int main()
{
    vector<vector<int>>
        m = {{1, 0, 0, 0},
             {1, 1, 0, 1},
             {1, 1, 0, 0},
             {0, 1, 1, 1}};
    int row = 4, col = 4;
    vector<vector<bool>> visited(row, vector<bool>(col, false));
    vector<string> path;
    string output = "";
    findPath(m, row);
    return 0;
}