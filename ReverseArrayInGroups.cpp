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
    int N = 9, K = 3;
    string arr = "123456789";
    // Output: 4 3 2 1 8 7 6 5 11 10 9
    int windowStart = 0, windowEnd = K - 1;
    for (int i = 0; i < N; i = i + K)
    {
        windowStart = i;
        windowEnd = min(i + K - 1, N - 1);
        while (windowStart < windowEnd)
        {
            swap(arr[windowStart++], arr[windowEnd--]);
        }
    }
    // i = 0 , front = 0,  end = 2
    // i = 3, front = 3, end = 5
    // i = 5, front = 5, end = 7
    cout << arr;
    return 0;
}