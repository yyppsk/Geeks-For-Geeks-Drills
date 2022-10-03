#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int longestPalinSubseq(string A)
{
    string transform = "";
    transform.push_back('@');
    for (auto ch : A)
    {
        transform.push_back('#');
        transform.push_back(ch);
    }
    transform.push_back('#');
    transform.push_back('$');
    cout << transform << endl;
    int n = transform.size();
    vector<int> lps(n, 0);
    for (int i = 2; i < n - 1; i++)
    {
        while (transform[i + (lps[i] + 1)] == transform[i - (lps[i] + 1)])
        {
            lps[i]++;
        }
    }
    for (auto i : lps)
    {
        cout << i << " ";
    }

    return *max_element(lps.begin(), lps.end());
}
int main()
{
    string s = "abababa";
    cout << longestPalinSubseq(s);
    return 0;
}