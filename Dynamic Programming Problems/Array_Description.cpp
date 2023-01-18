#include <bits/stdc++.h>
#define int long long int

using namespace std;

const int mod = 1e9 + 7;
int dp[100001][101];

signed main()
{
    int n, m;
    cin >> n >> m;
    vector<int> x(n);
    for (auto &i : x)
        cin >> i;
    if (x[0] == 0)
        fill(dp[0], dp[0] + 101, 1);
    else
        dp[0][x[0]] = 1;
    for (int i = 1; i < n; i++)
    {
        if (x[i] == 0)
        {
            for (int j = 1; j <= m; j++)
            {
                dp[i][j] += dp[i - 1][j];
                if (j - 1 > 0)
                    dp[i][j] += dp[i - 1][j - 1];
                if (j + 1 <= m)
                    dp[i][j] += dp[i - 1][j + 1];
                dp[i][j] %= mod;
            }
        }
        else
        {
            dp[i][x[i]] += dp[i - 1][x[i]];
            if (x[i] - 1 > 0)
                dp[i][x[i]] += dp[i - 1][x[i] - 1];
            if (x[i] + 1 <= m)
                dp[i][x[i]] += dp[i - 1][x[i] + 1];
            dp[i][x[i]] %= mod;
        }
    }
    int ans = 0;
    for (int i = 1; i <= m; i++)
        ans = (ans + dp[n - 1][i]) % mod;
    cout << ans;
    return 0;
}