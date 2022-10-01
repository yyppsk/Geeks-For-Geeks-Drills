// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <math.h>
#include <climits>
#include <algorithm>
using namespace std;
void prime(int n)
{
    vector<int> leastprime(n + 1, -1);
    leastprime[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        if (leastprime[i] == -1)
        {
            leastprime[i] = i;
            for (int j = i * i; j <= n; j += i)
            {
                if (leastprime[j] == -1)
                {
                    leastprime[j] = i;
                }
            }
        }
    }
    for (auto i : leastprime)
    {
        cout << i << " ";
    }
}
int main()
{
    int n = 6;
    prime(n);
    return 0;
}