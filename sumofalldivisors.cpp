#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
long long sumOfDivisors(int N)
{
    long long sum = 0;
    while (N)
    {
        for (long long i = 1; i <= N; i++)
        {
            if (N % i == 0)
                sum += i;
        }
        N--;
    }
    return sum;
}
int main()
{
    cout << sumOfDivisors(1000000);

    return 0;
}