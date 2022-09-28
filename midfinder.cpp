#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void solve(int n, string name)
{
    if (n < 1)
        return;
    solve(n - 1, name);
    cout << name << endl;
}
void solve2(int n)
{
    if (n < 1)
        return;
    solve2(n - 1);
    cout << n << " ";
}
void solve3(int n)
{
    if (n < 1)
        return;
    cout << n << " ";
    solve3(n - 1);
}
int fact(int N)
{
    if (N < 1)
    {
        return 1;
    }
    else
        return N * fact(N - 1);
}
int main()
{
    solve(10, "Jai Shree Ram");
    solve2(10);
    cout << endl;
    solve3(10);
    cout << endl;
    int N = 6;
    cout << fact(N);
    return 0;
}