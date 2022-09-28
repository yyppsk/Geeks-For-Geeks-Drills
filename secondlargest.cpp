#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int print2largest(int arr[], int n)
{

    int first = 0, second = -1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[first])
        {
            second = first;
            first = i;
        }
        else if (arr[i] < arr[first])
        {
            if (second == -1 || arr[second] < arr[i])
                second = i;
        }
    }
    return second;
}
int main()
{
    int n = 6;
    int arr[] = {12, 35, 1, 10, 34, 1};
    // cout << sizeof(arr) / sizeof(arr[0]);
    cout << arr[print2largest(arr, n)];
    return 0;
}