#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void bubbleSort(int arr[], int n)
{
    bool swapped;
    for (int i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            printf("Comparing %d with %d\n", arr[j], arr[j+1]);
            if (arr[j] >= arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                printf("Swapping %d with %d\n", arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int N = 5,
        arr[] = {4, 1, 3, 9, 7};
    bubbleSort(arr, N);
    return 0;
}