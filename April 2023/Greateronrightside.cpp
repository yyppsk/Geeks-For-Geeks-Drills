#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
/*N = 6
Arr[] = {16, 17, 4, 3, 5, 2}
Output:
17 5 5 5 2 -1*/
void nextGreatest(int arr[], int n)
{
    // n2
    /*
    for (int i = 0; i < n; i++)
    {
        int maxim = INT_MIN;
        for (int j = i + 1; j < n; j++)
        {
            maxim = max(maxim, arr[j]);
        }
        arr[i] = maxim;
    }
    arr[n - 1] = -1;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    */
    int greater = -1, temp = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        temp = arr[i];
        arr[i] = greater;
        greater = max(greater, temp);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int N = 6,
        Arr[] = {16, 17, 4, 3, 5, 2};
    nextGreatest(Arr, N);
    return 0;
}