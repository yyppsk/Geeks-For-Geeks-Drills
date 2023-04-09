#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
// largest subarray with sum 0
int maxLen(vector<int> &A, int n)
{
    int mxlen = INT_MIN;
    int summ = 0;
    for (int i = 0; i < A.size(); i++)
    {
        summ += A[i];
        for (int j = i + 1; j < A.size(); j++)
        {
            printf("%d + %d = %d \n", summ, A[j], summ + A[j]);
            summ += A[j];
            if (summ == 0)
            {
                mxlen = max(mxlen, (j - i + 1));
            }
        }
        summ = 0;
    }
    return mxlen;
}
int main()
{
    vector<int> arr = {15, -2, 2, -8, 1, 7, 10, 23};
    cout << maxLen(arr, 8);
    return 0;
}