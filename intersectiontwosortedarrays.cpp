#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
bool binarysearch(int key, int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == key)
            return true;
        else if (key > arr[mid])
            start = mid + 1;
        else if (key < arr[mid])
            end = mid - 1;
    }
    return false;
}
vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    // Your code here
    // return vector with correct order of elements
    vector<int> result;
    if (m < n)
    {
        bool check;
        for (int i = 0; i < m; i++)
        {
            check = binarysearch(arr2[i], arr1, n);
            if (check)
                result.push_back(arr2[i]);
        }
    }
    else
    {
        bool check;
        for (int i = 0; i < n; i++)
        {
            check = binarysearch(arr1[i], arr2, m);
            if (check)
                result.push_back(arr1[i]);
        }
    }
    return result;
}
int main()
{
    int n = 4, arr1[] = {1, 2, 2, 1}, m = 2, arr2[] = {2, 2};
    vector<int> ans = findUnion(arr1, arr2, n, m);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}