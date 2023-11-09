#include <bits/stdc++.h>
using namespace std;
const int MAX_SIZE = 100;
int maxGoldPath(int gold[MAX_SIZE][MAX_SIZE], int m, int n)
{
    int dp[MAX_SIZE][MAX_SIZE];

    for (int i = 0; i < m; i++)
    {
        dp[i][0] = gold[i][0];
    }
    for (int j = 1; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            dp[i][j] = gold[i][j];
            if (i > 0)
            {
                dp[i][j] = max(dp[i][j], gold[i][j] + dp[i - 1][j -

                               1]);

            }
            if (i < m - 1)
            {
                dp[i][j] = max(dp[i][j], gold[i][j] + dp[i + 1][j -

                               1]);

            }
            dp[i][j] = max(dp[i][j], gold[i][j] + dp[i][j - 1]);
        }
    }

    int maxGold = dp[0][n - 1];
    for (int i = 1; i < m; i++)
    {
        maxGold = max(maxGold, dp[i][n - 1]);
    }
    cout << "DP Table:\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << "\n";
    }
    return maxGold;
}
int main()
{

    int gold[MAX_SIZE][MAX_SIZE];
    int m, n;
    cout << "Enter number of rows and columns (m, n): ";
    cin >> m >> n;
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> gold[i][j];
        }
    }
    int maxGold = maxGoldPath(gold, m, n);
    cout << "Maximum amount of gold = " << maxGold << "\n";
    return 0;
}
