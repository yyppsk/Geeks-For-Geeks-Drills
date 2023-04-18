#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <unordered_map>
using namespace std;
bool checkTriplet(int arr[], int n)
{
    map<int, int> mp;
    /*
    for (int i = 0; i < n; i++)
    {
        int chk = target * target, archeck = arr[i] * arr[i];
        if (mp.find(chk - archeck) != mp.end())
        {
            return {mp[chk - archeck], i};
        }
        else
        {
            mp[archeck] = i;
            for (auto i : mp)
            {
                cout << i.first << " : " << i.second << endl;
            }
        }
        cout << " NEW " << endl;
    }
    */
    int temp = n;
    for (int i = 0; i < n; i++)
    {
        int archeck = arr[i] * arr[i];
        // cout << "Putting " << archeck << " in index " << i << endl;
        mp[archeck] = i;
    }
    int i = 0;
    for (auto it = mp.rbegin(); it != mp.rend(); it++)
    {
        int archeck = arr[i] * arr[i];
        int times = n;
        int chk = it->first;
        // cout << "CHK " << chk << endl;
        while (times)
        {
            // printf("if %d - %d in map \n", chk, archeck);
            if (mp.find(chk - archeck) != mp.end())
            {
                // cout << "Found " << endl;
                return true;
                // return {mp[chk - archeck], i};
            }
            times--;
        }
        // cout << it->first << " : " << it->second << endl;
    }
    return {};
}
int main()
{
    int N = 5,
        Arr[] = {3, 2, 4, 6, 5};
    vector<int> res;
    // res = checkTriplet(Arr, N);
    // for (auto i : res)
    // {
    //     cout << Arr[i] << " ";
    // }

    // checkTriplet(Arr, N) ? cout << "Yes" : cout << "No";
    return 0;
}