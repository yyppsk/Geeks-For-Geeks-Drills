#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void solve()
{
}
int main()
{
    int A = 1, B = 3;
    int x = A;
    int count = 0;
    while (--B)
    {
        if (x % 2 == 0)
            x = x / 2;
        else
            x = (x * 3) + 1;
        cout << x << ">";
    }
    cout << x;
    return 0;
}