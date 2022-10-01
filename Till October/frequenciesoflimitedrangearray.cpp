#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <string>
using namespace std;
void frequencyCount(vector<int> &arr, int N, int P)
{

    unordered_map<int, int> map;
    for (int i = 0; i < arr.size() && (arr[i] <= P && arr[i] >= 1); i++)
    {
        if (arr[i] <= N)
            map[arr[i]] += 1;
    }
    for (auto i : map)
    {
        cout << i.first << ":" << i.second << endl;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        arr[i] = map[i + 1];
    }
}
int main()
{
    int N = 4, P = 3;
    vector<int> arr = {3, 3, 3, 3};
    frequencyCount(arr, N, P);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}