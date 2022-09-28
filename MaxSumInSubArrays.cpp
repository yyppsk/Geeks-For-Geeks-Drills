#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void bruteforce(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {

        for (int j = i + 1; j <= arr.size() - 1; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
}
int solve(vector<int> arr)
{
    // Your code goes here
    if (arr.size() == 1)
        return 0;
    long long max_sum = INT_MIN;
    long long local_sum;
    for (long long i = 0; i < arr.size() - 1; i++)
    {
        local_sum = arr[i] + arr[i + 1];
        cout << arr[i] << " " << arr[i + 1] << endl;
        max_sum = max(max_sum, local_sum);
    }
    return max_sum;
}
int main()
{
    vector<int> arr = {4, 3, 1, 5, 6};
    bruteforce(arr);
    cout << endl;
    cout << solve(arr);
    return 0;
}