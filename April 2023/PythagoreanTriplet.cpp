#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <unordered_map>
using namespace std;
bool checkTriplet(int arr[], int n)
{
    unordered_map<int, int> mp;
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
    unordered_map<int, bool> mp;
    int max_val = 0;

    for (int i = 0; i < n; i++)
    {
        mp[arr[i] * arr[i]] = i;
        max_val = max(max_val, arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // printf("%d + %d = %d \n", i * i, j * j, i * i + j * j);
            if (mp.find(arr[i] * arr[i] + arr[j] * arr[j]) != mp.end())
            {
                return true;
            }
        }
    }

    return false;
    /*
    for (auto it = mp.rbegin(); it != mp.rend(); it++)
    {
        cout << it->first << " : " << it->second << endl;
    }
    // cout << it->first << " : " << it->second << endl;

    int i = 0;
    for (auto it = mp.rbegin(); it != mp.rend(); it++)
    {
        int archeck = arr[i] * arr[i];
        int times = n;
        int chk = it->first;
        // cout << "CHK " << chk << endl;
        if (chk - archeck >= 0)
            while (times)
            {
                printf("if %d - %d = %d \n", chk, archeck, chk - archeck);
                if (mp.find(chk - archeck) != mp.end())
                {
                    cout << "Found " << endl;
                    return true;
                    // return {mp[chk - archeck], i};
                }
                times--;
            }
        // cout << it->first << " : " << it->second << endl;
    }
    return false;
    */
}
int main()
{
    int N = 44,
        Arr[] = {68, 35, 1, 70, 25, 79, 59, 63, 65, 6, 46, 82, 28, 62, 92, 96, 43, 28, 37, 92, 5, 3, 54, 93, 83, 22, 17, 19, 96, 48, 27, 72, 39, 70, 13, 68, 100, 36, 95, 4, 12, 23, 34, 74};
    vector<int> res;
    // res = checkTriplet(Arr, N);
    // for (auto i : res)
    // {
    //     cout << Arr[i] << " ";
    // }
    cout << checkTriplet(Arr, N);
    // checkTriplet(Arr, N) ? cout << "Yes" : cout << "No";
    return 0;
}