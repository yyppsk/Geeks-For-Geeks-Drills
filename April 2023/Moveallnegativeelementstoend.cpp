#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void segregateElements(int A[], int N)
{
    /*Inplace
    int i = 0;
    int j = N - 1;
    while (i <= j)
    {
        if (A[i] < 0 && A[j] >= 0)
        {
            swap(A[i], A[j]);
            i++;
            j--;
        }
        else if (A[i] >= 0 && A[j] >= 0)
        {
            i++;
        }
        else if (A[i] < 0 && A[j] < 0)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    */
    int arr[N];
    copy(A, A + N, arr);
    int pos = 0;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] >= 0)
        {

            A[pos] = arr[i];
            pos++;
        }
    }
    int neg = pos;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] < 0)
        {

            A[neg] = arr[i];
            neg++;
        }
    }
}
int main()
{
    int N = 8;
    int arr[] = {1, -1, 3, 2, -7, -5, 11, 6};
    segregateElements(arr, N);
    return 0;
}