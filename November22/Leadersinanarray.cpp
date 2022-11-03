#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
using namespace std;
vector<int> leaderssol1(int a[], int n)
{
    vector<int> soln;
    for (int i = 0; i < n - 1; i++)
    {
        bool ans = true;
        int sol = 0;
        for (int j = i + 1; j < n; j++)
        {

            if (a[i] > a[j])
            {
                sol = a[i];
            }
            else
            {
                ans = false;
            }
        }
        if (ans)
            soln.push_back(sol);
    }
    soln.push_back(a[n - 1]);
    for (auto i : soln)
        cout << i << " ";
    return soln;
}
vector<int> leaders(int a[], int n)
{
    deque<int> q;
    q.push_front(a[n - 1]);
    int maxi = a[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] > maxi)
        {
            q.push_front(a[i]);
            maxi = a[i];
        }
    }
    for (auto it = q.rbegin(); it != q.rend(); ++it)
        cout << *it << " ";
    return {};
}
vector<int> leaders(int a[], int n)
{
    int max = a[n - 1];

    vector<int> v;

    v.push_back(max);

    for (int i = n - 2; i >= 0; --i)
    {

        if (a[i] >= max)
        {

            v.push_back(a[i]);

            max = a[i];
        }
    }

    reverse(v.begin(), v.end());

    return v;
}
int main()
{
    int n = 6,
        A[] = {16, 17, 4, 3, 5, 2};
    leaders(A, n);
    return 0;
}