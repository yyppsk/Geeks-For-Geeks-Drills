#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
string oddEven(string S)
{
    unordered_map<char, int> map;
    int x = 0;
    int y = 0;
    for (int i = 0; i < S.size(); i++)
    {
        map[S[i]]++;
    }
    for (auto i : map)
    {
        cout << i.first << ":" << i.second << endl;
    }
    for (auto i : map)
    {
        if ((i.first) % 2 == 0)
        {
            if (i.second % 2 == 0) // frequency
            {
                x++;
            }
        }
        else if ((i.first) % 2 != 0)
        {
            if (i.second % 2 != 0) // frequency
            {
                y++;
            }
        }
    }
    cout << "X : " << x << endl;
    cout << "y: " << y << endl;
    return ((x + y) % 2 == 0) ? "EVEN" : "ODD";
}
int main()
{
    string S = "hqghumeaylnlfdxfircvscxggbwkfnqduxwfnfozvs";
    cout << oddEven(S);
    return 0;
}