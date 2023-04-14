#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int numofsubset(int arr[], int n)
{
    sort(arr, arr + n);
    int counter = 0, curr = 1, chain = 1;
    for (int i = 0; i < n - 1; i++)
    {
        // if (arr[i] = arr[i + 1])
        cout << arr[i] + 1 << " ==  " << arr[i + 1] << endl;
        if (arr[i] + 1 == arr[i + 1] == 1)
            chain = 1;
        if ((arr[i] + 1 == arr[i + 1]) && chain == 1)
        {
            chain = 1;
        }
        else
        {
            curr++;
            chain = 0;
        }
    }
    return curr;
}
int main()
{
    int N = 10,
        Arr[] = {100, 56, 5, 6, 102, 58, 101, 57, 7, 103};
    cout << numofsubset(Arr, N);
    return 0;
}