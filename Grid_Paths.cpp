#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;

ll f(int i, int j, vector<vector<char>> &grid, vector<vector<ll>> &dp)
{
    int n = grid.size();
    if (i >= n || j >= n || grid[i][j] == '*')
        return 0;
    if (i == n - 1 && j == n - 1)
        return 1;  
    if (dp[i][j] != -1)
        return dp[i][j];

    return dp[i][j] = (f(i + 1, j, grid, dp) + f(i, j + 1, grid, dp)) % mod;
}
int main()
{
    ll n;
    cin >> n;

    vector<vector<char>> grid(n, vector<char>(n));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)        
            cin >> grid[i][j];
        
    }
    vector<vector<ll>> dp(n, vector<ll>(n, 0));

    if (grid[0][0] == '.')
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == 0 && j == 0)
                    dp[i][j] = 1;
                else
                {
                    if (grid[i][j] == '.')
                    {
                        if (i > 0)
                            dp[i][j] = (dp[i][j] + dp[i - 1][j]) % mod;
                        if (j > 0)
                            dp[i][j] = (dp[i][j] + dp[i][j - 1]) % mod;
                    }
                }
            }
        }
    }
    cout << dp[n - 1][n - 1] << endl;
    return 0;
}