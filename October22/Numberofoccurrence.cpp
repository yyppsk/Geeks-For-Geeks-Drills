#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    /* if x is present in arr[] then returns the count
        of occurrences of x, otherwise returns 0. */
    int count(int arr[], int n, int x)
    {
        bool check = binary_search(arr, arr + n, x);
        if (!check)
        {
            return 0;
        }
        auto lower = lower_bound(arr, arr + n, x) - arr;
        auto upper = upper_bound(arr, arr + n, x) - arr;
        return (upper - lower);
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[1];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends