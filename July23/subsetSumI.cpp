#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void findStuff(vector<int> &arr, int N, vector<int> &ds, int idx, int sum)
{
    if (idx == N)
    {
        ds.push_back(sum);
        return;
    }

    // take it
    findStuff(arr, N, ds, idx + 1, sum + arr[idx]);
    // leave it
    findStuff(arr, N, ds, idx + 1, sum);
}
vector<int> subsetSums(vector<int> arr, int N)
{
    vector<int> ds;
    findStuff(arr, N, ds, 0, 0);
    return ds;
}
int main()
{
    return 0;
}