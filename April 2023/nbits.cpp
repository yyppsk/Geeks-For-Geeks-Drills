#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
char A[2];
void solve(int n)
{
    // cout << "You called me" << endl;
    if (n < 1)
    {
        printf("%s\n", A);
    }
    else
    {
        A[n - 1] = '0';
        printf("Assign A[%d] = 0\n", n - 1);
        printf("Calling Solve(%d)\n", n - 1);
        solve(n - 1);
        A[n - 1] = '1';
        printf("Second Assign A[%d] = 1\n", n - 1);
        printf("Second Calling Solve(%d)\n", n - 1);
        solve(n - 1);
    }
    return;
}
int main()
{
    solve(2);
    return 0;
}