#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
vector<int> subarraySum(vector<int> arr, int n, long long s)
{
    int start = 0, runner = 0;
    int sum = arr[0];
    while (runner < n)
    {
        if (sum == s)
        {
            return {start + 1, runner + 1};
        }
        else if (sum < s || start == runner)
        {
            if (runner == n - 1)
                break;
            runner++;
            sum = sum + arr[runner];

            // cout<<"sum < s "<<sum<<endl;
        }
        else if (sum > s)
        {
            sum = sum - arr[start];
            start++;
            // cout<<"sum > s "<<sum<<endl;
        }
    }
    return {-1};
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