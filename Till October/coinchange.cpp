#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int coin(int coins[], int N, int sum)
{
    cout << "Called " << endl;
    vector<vector<int>> dp(N + 1, vector<int>(sum + 1, 0));
    for (int i = 0; i < sum + 1; i++)
    {
        dp[0][i] = 0;
    }
    for (int i = 0; i < N + 1; i++)
    {
        dp[i][0] = 1;
    }
    for (int i = 1; i < N + 1; i++)
    {
        for (int j = 0; j < sum + 1; j++)
        {
            if (coins[i - 1] <= j)
            {
                dp[i][j] = dp[i][j - coins[i - 1]] + dp[i - 1][j];
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    for (int i = 0; i < N + 1; i++)
    {
        for (int j = 0; j < sum + 1; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    return dp[N][sum];
}
int main()
{
    int coins[] = {1, 2, 3};
    int N = 3;
    int sum = 4;
    cout << coin(coins, N, sum);

    return 0;
}