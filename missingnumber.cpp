#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int missingNumber(int A[], int n)
{
    int series = n;
    series = series * (series + 1) / 2;
    int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        sum += A[i];
        cout << sum << endl;
    }
    return series - sum;
}
int main()
{
    int N = 4, A[] = {1, 4, 3};
    missingNumber(A, N);
    return 0;
}