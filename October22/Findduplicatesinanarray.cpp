#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;
vector<int> duplicates(int arr[], int n)
{
    unordered_map<int, int> map;
    for (int i = 0; i < n; i++)
    {
        map[arr[i]]++;
    }
    vector<int> result;
    for (auto i : map)
    {
        if (i.second >= 2)
            result.push_back(i.first);
    }
    for (auto i : result)
    {
        cout << i << " ";
    }
    if (result.size() == 0)
    {
        return {-1};
    }
    else
    {
        sort(result.begin(), result.end());
        return result;
    }
}
vector<int> duplicatessol2(int arr[], int n)
{
    vector<int> result;
    for (int i = 0; i < n; i++)
    {
        int index = arr[i] % n;
        arr[index] += n;
    }
    for (int i = 0; i < n; i++)
    {
        if ((arr[i] / n) >= 2)
            result.push_back(i);
    }
    return result;
}
int main()
{
    int n = 5, arr[] = {4, 4, 4, 4, 4};
    duplicatessol2(arr, n);
    return 0;
}