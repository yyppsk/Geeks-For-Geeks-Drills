#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <string>
using namespace std;
vector<pair<int, int>> allPairs(int A[], int B[], int N, int M, int X)
{
    vector<pair<int, int>> ans;
    unordered_map<int, int> map;
    for (int i = 0; i < N; i++)
    {
        map[A[i]] = i;
    }
    sort(B, B + M);
    for (int i = 0; i < M; i++)
    {
        if (map.find(X - B[i]) != map.end())
            ans.push_back({X - B[i], B[i]});
    }
    for (auto i : ans)
    {
        cout << i.first << ":" << i.second << endl;
    }
    return {};
}
int main()
{
    int A[] = {1, 2, 4, 5, 7},
        B[] = {5, 6, 3, 4, 8},
        X = 9;
    allPairs(A, B, 5, 5, X);
    return 0;
}