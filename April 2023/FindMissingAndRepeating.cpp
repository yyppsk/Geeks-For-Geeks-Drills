#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <string>
using namespace std;
class Solution
{
public:
    int *findTwoElement(int *Arr, int N)
    {
        int repeating = -1, missing = -1;

        for (int i = 0; i < N; i++)
        {
            int index = abs(Arr[i]) - 1;
            if (Arr[index] < 0)
            {
                repeating = abs(Arr[i]);
            }
            else
            {
                Arr[index] = -Arr[index];
            }
        }

        for (int i = 0; i < N; i++)
        {
            if (Arr[i] > 0)
            {
                missing = i + 1;
                break;
            }
        }
        int *res = new int[2];
        res[0] = repeating;
        res[1] = missing;
        return res;
    }
    int *findTwoElement2(int *arr, int n)
    {
        unordered_map<int, int> mp;
        int *res = new int[2];
        for (int i = 1; i <= n; i++)
        {
            mp[i] = 0;
        }
        for (auto i : mp)
        {
            cout << i.first << " : " << i.second << endl;
        }
        for (int i = 0; i < n; i++)
        {
            mp[arr[i]]++;
        }
        for (auto i : mp)
        {
            cout << i.first << " : " << i.second << endl;
        }
        for (auto i : mp)
        {
            if (i.second == 0)
                ans[1] = i.first;
            if (i.second >= 2)
                ans[0] = i.first;
        }
        for (int i = 0; i < 2; i++)
        {
            cout << ans[i] << " ";
        }
        return ans;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
        return 0;
    }
}