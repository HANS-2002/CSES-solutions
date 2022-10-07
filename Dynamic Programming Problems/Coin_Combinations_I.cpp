#include <bits/stdc++.h>
#define int long long int

using namespace std;

const int mod = 1e9 + 7;

signed main()
{
    int n, x;
    cin >> n >> x;
    vector<int> coins(n);
    for (auto &i : coins)
        cin >> i;
    vector<int> dp(x + 1);
    dp[0] = 1;
    for (int i = 1; i <= x; i++)
        for (auto j : coins)
            if (i - j >= 0)
                dp[i] = (dp[i] + dp[i - j]) % mod;
    cout << dp[x] << "\n";
    return 0;
}