#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
long long int bs(int n)
{
    int start = 0, end = n;
    long long int mid = start + (end - start) / 2;
    long long int ans = -1;
    while (start <= end)
    {
        long long int square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        else if (square < n)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int mySqrt(int x)
{
    return bs(x);
}
int main()
{
    cout << mySqrt(36);
    return 0;
}