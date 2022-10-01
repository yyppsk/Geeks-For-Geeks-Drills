#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
vector<int> find(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int pos = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else if (arr[mid] == key)
        {
            pos = mid;
            end = mid - 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }

    vector<int> res;
    res.push_back(pos);

    start = 0;
    end = n - 1;
    pos = -1;
    mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            pos = mid;
            start = mid + 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    res.push_back(pos);
    return res;
}
int main()
{
    vector<int> v;
    int n = 9, x = 5,
        arr[] = {1, 3, 5, 5, 5, 5, 67, 123, 125};
    v = find(arr, n, x);
    cout << v[0] << " " << v[1];
    return 0;
}