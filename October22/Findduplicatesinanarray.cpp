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
int main()
{
    int N = 5, a[] = {2, 3, 1, 2, 3};
    duplicates(a, N);

    return 0;
}