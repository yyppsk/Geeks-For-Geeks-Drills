#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int unvisitedLeaves(int N, int leaves, int frogs[])
{
    vector<int> lvs(leaves + 1, 0);
    for (int i = 0; i < N; i++)
    {
        int currPos = frogs[i];
        if (currPos <= leaves && !lvs[currPos])
        {
            for (int j = frogs[i]; j <= leaves; j = j + frogs[i])
            {
                // cout << "Gap when i = " << i << " j = " << j << endl;
                if (lvs[j] == 0)
                {
                    lvs[j] = 1;
                }
            }
        }
    }
    int count = 0;
    for (int i = 1; i < lvs.size(); i++)
    {
        if (lvs[i] == 0)
            count++;
    }
    return count;
}
int main()
{
    int N = 3,
        leaves = 4,
        frogs[] = {3, 2, 4};
    // 1 2 3 4 5 6
    cout << unvisitedLeaves(N, leaves, frogs);
    return 0;
}