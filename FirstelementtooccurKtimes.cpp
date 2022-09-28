#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;
int firstElementKTime(int a[], int n, int k)
{
    unordered_map<int, int> map;
    for (int i = 0; i < n; i++)
    {
        map[a[i]]++;
        cout << map[a[i]] << endl;
        if (map[a[i]] == k)
            return a[i];
    }
    for (auto i : map)
    {
        cout << i.first << ":" << i.second << endl;
    }
    return 0;
}
int main()
{
    int N = 4, K = 3, A[] = {5, 4, 3, 3};
    cout << firstElementKTime(A, N, K);
    return 0;
}