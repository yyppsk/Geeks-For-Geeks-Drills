#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void remove_duplicate(int a[], int n)
{
    // code here
    int size = n;
    int marker = n;
    int i = 0, j = 1;
    while (i < marker && j < marker)
    {
        if (a[i] == a[j])
        {
            j++;
            size--;
        }
        else
        {
            i = j;
            j++;
        }
        //printf("Put %d at %d position\n", a[size], j);
    }
}
int main()
{
    int n = 42;
    int arr[43];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    remove_duplicate(arr, n);
    return 0;
}