#include <bits/stdc++.h>
#define int long long int
const int mod = 1e9 + 7;

using namespace std;

signed main()
{
    int n;
    cin >> n;
    int tot = n * (n + 1) / 2;
    if (tot & 1)
    {
        cout << "0\n";
        return 0;
    }
    tot /= 2;
    vector<vector<int>> dp(n, vector<int>(tot + 1, 0));
    dp[0][0] = 1;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j <= tot; j++)
        {
            dp[i][j] = dp[i - 1][j];
            if (j >= i)
                (dp[i][j] += dp[i - 1][j - i]) %= mod;
        }
    }
    cout << dp[n - 1][tot] << "\n";
    return 0;
}