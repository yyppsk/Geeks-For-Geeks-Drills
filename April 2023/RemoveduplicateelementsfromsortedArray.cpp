#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int remove_duplicate(int a[], int n)
{
    int i = 0;

    for (int j = 1; j < n; j++)
    {
        if (a[j] != a[i])
        {
            i++;
            a[i] = a[j];
        }
    }
    return i + 1;
}
int main()
{
    int N = 3, Array[] = {0, 0, 0};
    cout << remove_duplicate(Array, N);
    return 0;
}