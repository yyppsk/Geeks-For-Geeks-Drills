#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int transitionPoint(int arr[], int n)
{
    // peak finding trick, doesn't work when even case occured
    /*
    while (start < end)
    {
        // cout << "J";
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
            end = mid;
        mid = start + (end - start) / 2;
    }
    if (start == 0 && arr[0] == 0)
        return -1;
    return start;
    */
    int start = 0, end = n - 1, ans = -1;
    while (start <= end)
    { // log(n)
        int mid = start + (end - start) / 2;
        if (arr[mid] == 1)
        {
            ans = mid;     // store index
            end = mid - 1; // look for first occurence
        }
        else if (arr[mid] == 0)
            start = mid + 1;
    }
    return ans;
}
int main()
{
    int N = 5,
        arr[] = {0, 0, 0, 0, 1};
    cout << transitionPoint(arr, N);
    return 0;
}