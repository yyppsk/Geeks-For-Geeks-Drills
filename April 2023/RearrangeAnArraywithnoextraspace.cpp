#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void arrange(long long arr[], int n)
{
    vector<int> temp(n, 0);
    for (int i = 0; i < n; i++)
    {
        temp[i] = arr[arr[i]];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}
int main()
{
    int N = 5;
    long long int arr[] = {4, 0, 2, 1, 3};
    arrange(arr, N);
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}