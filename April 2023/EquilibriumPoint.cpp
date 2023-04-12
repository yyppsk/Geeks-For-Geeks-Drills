#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int equilibriumPoint(long long a[], int n)
{
    int leftsum = 0, rightsum = 0;
    int r1 = 0, r2 = 1, r3 = n - 2, r4 = n - 1;
    while (leftsum != rightsum)
    {
        leftsum = a[r1] + a[r2];
        r1++, r2++;
        rightsum = a[r3] + a[r4];
        r3++, r4++;
    }
    cout << leftsum << " " << rightsum << endl;
    return 0;
}
int main()
{
    int n = 5;
    long long A[] = {1, 3, 5, 2, 2};
    cout << equilibriumPoint(A, n);
    return 0;
}