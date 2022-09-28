#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void search(vector<int> A, int N)
{

    int j = 1;
    for (int i = N - 1; i >= 1; i--)
    {
        printf("%d ^ %d : %d \n", A[i], A[i - 1], A[i] ^ A[i - 1]);
        A.pop_back();
    }
}
int main()
{
    int N = 14;
    vector<int> Arr = {1, 1, 2, 2, 2, 5, 5, 7, 7, 7, 7, 7, 7, 0};
    search(Arr, N);
    return 0;
}