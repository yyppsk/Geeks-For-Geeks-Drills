#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
bool find3Numbers(int A[], int n, int X)
{
    int required = X;
    int mx = INT_MIN;
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            required = X - A[i] + A[j];
        }
    }
    return 0;
}
int main()
{
    int n = 6, X = 13, arr[] = {1, 4, 45, 6, 10, 8};
    cout << find3Numbers(arr, n, X);
    return 0;
}