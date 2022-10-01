// C++ implementation to find the length
// of longest subarray having sum k
#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
// function to find the length of longest
// subarray having sum k
int lenOfLongSubarr(int arr[],
                    int n,
                    int k)
{

    // unordered_map 'um' implemented
    // as hash table
    unordered_map<int, int> um;
    int sum = 0, maxLen = 0;

    // traverse the given array
    for (int i = 0; i < n; i++)
    {

        // accumulate sum
        sum += arr[i];

        // when subarray starts from index '0'
        if (sum == k)
            maxLen = i + 1;

        // make an entry for 'sum' if it is
        // not present in 'um'
        if (um.find(sum) == um.end())
            um[sum] = i;

        // check if 'sum-k' is present in 'um'
        // or not
        if (um.find(sum - k) != um.end())
        {
            //printf("SUM - K: %d - %d\n", sum, k); // update maxLength
            if (maxLen < (i - um[sum - k]))
                maxLen = i - um[sum - k];
        }
    }
    /*
    cout << endl;
    for (auto i : um)
    {
        cout << i.first << ":" << i.second << endl;
    }
    */
    // required maximum length
    return maxLen;
}

// Driver Code
int main()
{
    int arr[] = {-13, 0, 6, 15, 16, 2, 15, -12, 17, -16, 0, -3, 19, -3, 2, -9, -6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 15;
    cout << "Length = "
         << lenOfLongSubarr(arr, n, k);
    return 0;
}
