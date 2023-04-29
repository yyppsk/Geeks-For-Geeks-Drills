#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;
const int MOD = 1000000007;
long long evaluateA(long long A, long long K)
{
    long long result = 1;
    while (K > 0)
    {
        if (K % 2 == 1)
        {
            result = (result * A) % MOD;
        }
        A = (A * A) % MOD;
        K /= 2;
    }
    return result;
}
int main()
{
    cout << evaluateA(347148, 41171001);
    return 0;
}