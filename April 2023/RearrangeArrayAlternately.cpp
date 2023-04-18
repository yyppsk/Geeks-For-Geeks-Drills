#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
// This function wants you to modify the given input
// array and no need to return anything
// arr: input array
// n: size of array
// Function to rearrange  the array elements alternately.
void rearrange(long long *arr, int n)
{
    vector<long long> extra;
    long long start = 0, end = n - 1;
    if (n % 2 != 0)
        while (start <= end)
        {
            extra.push_back(arr[end]);
            if (start < end)
                extra.push_back(arr[start]);
            start++, end--;
        }
    else
        while (start < end)
        {
            extra.push_back(arr[end]);
            extra.push_back(arr[start]);
            start++, end--;
        }
    for (auto i : extra)
    {
        cout << i << " ";
    }
    int k = 0;
    for (auto i : extra)
    {
        arr[k] = i;
        k++;
    }
    cout << endl;
}
int main()
{
    int n = 11;
    long long arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110};
    rearrange(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]
             << " ";
    }
    return 0;
}