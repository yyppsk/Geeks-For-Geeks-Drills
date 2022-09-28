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
    int n = 100;
    for (int i = 1; i < 11; i++)
        for (int j = 1; j < 10; j++)
            printf("%d * %d = %d\n", i, j, i * j);
    return 0;
}