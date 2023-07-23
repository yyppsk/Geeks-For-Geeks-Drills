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
        for (int j = i + 1; j < N - 1; j++)
        {
            if (arr[i] < arr[j])
            {
                ++count;
            }
        }
    }
    return count;
}
int main()
{
    long long N = 5, arr[] = {2, 4, 1, 3, 5};
    cout << inversionCount(arr, N);
    return 0;
}