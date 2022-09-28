#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void leftRotate(int arr[], int k, int n)
{
    for (int i = k; i < k + n; i++)
    {
        int temp = arr[i]
        cout << arr[i % n] << " ";
    }
}
int main()
{
    int N = 7, K = 2, arr[] = {1, 2, 3, 4, 5, 6, 7};
    // 3 4 5 6 7 1 2
    leftRotate(arr, K, N);
    return 0;
}