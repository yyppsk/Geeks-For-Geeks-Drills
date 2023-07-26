#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
long long int inversionCount(long long arr[], long long N)
{
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (arr[i] > arr[j])
            {
                ++count;
            }
        }
    }
    return count;
}
int main()
{
    long long N = 42, arr[] = {468, 335, 1, 170, 225, 479, 359, 463, 465, 206, 146, 282, 328, 462, 492, 496, 443, 328, 437, 392, 105, 403, 154, 293, 383, 422, 217, 219, 396, 448, 227, 272, 39, 370, 413, 168, 300, 36, 395, 204, 312, 323};
    cout << inversionCount(arr, N);
    return 0;
}