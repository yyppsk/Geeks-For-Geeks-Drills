#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int findpivot(int arr[], int start, int end)
{
    end = end - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}
int binarySearch(int arr[], int start, int end, int key)
{
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int search(int A[], int l, int h, int key)
{
    // l: The starting index
    // h: The ending index, you have to search the key in this range
    int pivot = findpivot(A, l, h);
    if (A[pivot] <= key && key <= A[h - 1])
    {
        return binarySearch(A, pivot, h - 1, key);
    }
    else
    {
        return binarySearch(A, l, pivot - 1, key);
    }
}
int main()
{
    int arr[] = {3, 1};
    int N = 2, key = 1;
    cout << search(arr, 0, N, key);
    return 0;
}