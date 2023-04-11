#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
vector<int> subarraySum(vector<int> arr, int n, long long s)
{
    int start = 0, end = 1;
    int sum = 0;
    while (end <= n)
    {
        sum += arr[start] + arr[end];
        cout << sum << endl;
        end++;
    }
    return {start, end};
}
int main()
{

    vector<int>
        A = {1, 2, 3, 7, 5};
    int N = 5, S = 12;
    A = subarraySum(A, N, S);
    for (auto i : A)
    {
        cout << i << " ";
    }
    return 0;
}