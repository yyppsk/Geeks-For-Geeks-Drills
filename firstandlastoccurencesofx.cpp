#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int bs(vector<int> arr, int key)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = arr.size() / 2;
    while (start <= end)
    {
        mid = (end - start) / 2 + end;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key > arr[mid])
            start = mid + 1;
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}
void solve(vector<int> arr, int n, int x)
{
    vector<int> res;
}
int main()
{
    int n = 30, x = 8;
    vector<int> arr = {1, 1, 1, 2, 3, 3, 3, 4, 4, 4, 4, 4, 5, 5, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 9, 9, 10, 10, 10};
    cout << bs(arr, x);
    return 0;
}