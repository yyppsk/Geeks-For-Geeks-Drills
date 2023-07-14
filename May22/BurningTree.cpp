#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <unordered_map>
#include <queue>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
int minTime(Node *root, int target)
{
    if (root == NULL)
        return -1;
    map<int, vector<int>> adj;
    dfs_tree_toadjList(root, adj);
    int time = farthestPoint_distance(target, adj); // last infected level time
    return time;
}
void dfs_tree_toadjList(Node *root, map<int, vector<int>> &adj) // to build adjacent list
{
    if (root->left)
    {
        adj[root->data].push_back(root->left->data);
        adj[root->left->data].push_back(root->data);
        dfs_tree_toadjList(root->left, adj);
    }
    if (root->right)
    {
        adj[root->data].push_back(root->right->data);
        adj[root->right->data].push_back(root->data);
        dfs_tree_toadjList(root->right, adj);
    }
}
int farthestPoint_distance(int start, map<int, vector<int>> &adj)
{
    queue<int> q;
    int n = adj.size();
    unordered_map<int, bool> visited; /*IMP here*/
    q.push(start);
    visited[start] = true;
    int level = -1;
    while (!q.empty())
    {
        int size = q.size();
        level++;
        while (size--)
        {
            int curr = q.front();
            q.pop();
            for (auto adj_node : adj[curr])
            {
                if (visited[adj_node] == false)
                {
                    visited[adj_node] = true;
                    q.push(adj_node);
                }
            }
        }
    }
    int time_lastinfected = level; // time equals last level as one second increase from 0;
    return time_lastinfected;
}
int main()
{
    return 0;
}