#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void leftRotate(int arr[], int k, int n)
{
    for (int i = k; i < k + n; i++)
    {
        int size = n;
        int indexwithoutk = i % n;
        int indexwithk;
        if ((i % n) - k >= 0)
        {
            indexwithk = (i % n) - k;
        }
        else
        {
            indexwithk = size + ((i % n) - k);
        }
        int temp = arr[indexwithk];
        arr[indexwithk] = arr[indexwithoutk];
        // arr[n-i] = temp;
        //  int temp = arr[((indexwithoutk)-k >= 0) ? (indexwithoutk)-k : n + ((i % n) - k)];
        //   printf("Inside Temp : %d \n", temp);
        arr[((i % n) - k >= 0) ? (i % n) - k : n + ((i % n) - k)] = arr[i % n];
        //   printf("Putting %d in Formula\n", arr[i % n]);
        //   arr[i % n] = temp;
    }
    cout << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
int main()
{
    int N = 6, K = 2, arr[] = {1, 2, 3, 4, 5, 6};
    // 3 4 5 6 7 1 2
    leftRotate(arr, K, N);
    arr[i][front] = !arr[i][front];
    return 0;
}