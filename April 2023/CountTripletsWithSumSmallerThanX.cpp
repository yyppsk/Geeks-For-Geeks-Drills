#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;
long long countTriplets(long long arr[], int n, long long sum)
{
    /*
    int j = 1, k = 2, cnt = 0;
    int fixedsum = 0;
    for (int i = 0; i < n - 2; i++)
    {

        fixedsum = arr[i] + arr[i + 1];
        cout << fixedsum << endl;
        for (int j = i + 1; j < n - 1; j++)
        {
            k = j + 1;
            while (k <= n - 1)
            {

                if (fixedsum + arr[k] < sum)
                {
                    cnt++;
                }
                k++;
            }
        }
    }
    return cnt;
    */
    /*
     int j = 1, k = 2, cnt = 0;
     int fixedSum = 0;
     for (int i = 0; i < n - 2; i++)
     {
         for (int j = i + 1; j < n - 1; j++)
         {
             fixedSum = arr[i] + arr[j];
             k = j + 1;
             while (k < n)
             {
                 if (fixedSum + arr[k] < sum)
                 {
                     cnt++;
                 }
                 k++;
             }
         }
     }
     return cnt;
     */
    /*
    int cnt = 0;
    for (int i = 0; i < n - 2; i++)
    {
        int j = i + 1, k = n - 1;
        while (j < k)
        {
            if (arr[i] + arr[j] + arr[k] < sum)
            {
                cnt += (k - j); // Count all triplets with the same i and j
                j++;
            }
            else
            {
                k--;
            }
        }
    }
    return cnt;
    */
    sort(arr, arr + n);
    int cnt = 0;
    for (int i = 0; i < n - 2; i++)
    {
        int j = i + 1;
        int k = n - 1;
        while (j < k)
        {
            if (arr[i] + arr[j] + arr[k] < sum)
            {
                cnt += k - j;
                j++;
            }
            else
            {
                k--;
            }
        }
    }
    return cnt;
}
int main()
{
    int N = 6;
    long long arr[] = {3, 2, 4, 1, 5, 7};
    cout << countTriplets(arr, 6, 10);
    return 0;
}