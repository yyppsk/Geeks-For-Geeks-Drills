#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <string>
using namespace std;
void solve()
{
}
int main()
{
    unordered_map<int, int> map;
    int N = 4, k = 6;
    int arr[] = {1, 5, 7, 1};
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        if (map.find(k - arr[i]) != map.end())
        {
            count = count + map[k - arr[i]];
            for (auto i : map)
            {
                cout << i.first << ":" << i.second << endl;
            }
            cout << "Next : \n";
        }
        map[arr[i]]++;
    }
    for (auto i : map)
    {
        cout << i.first << ":" << i.second << endl;
    }
    cout << count;
    return 0;
}