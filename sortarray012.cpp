#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void sort012(int a[], int n)
{
    int front = 0;
    int end = n - 1;
    while (front < end)
    {
        if (a[front] < a[end] && front < end)
        {
            end--;
        }
        else if (a[front] > a[end] && front < end)
        {
            swap(a[front], a[end]);
            front++;
        }
        else if (a[front] == a[end] && front < end)
        {
            front++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int N = 12,
        arr[] = {0, 1, 0, 2, 1, 1, 1, 1, 0, 0, 1, 2};
    sort012(arr, N);
    return 0;
}