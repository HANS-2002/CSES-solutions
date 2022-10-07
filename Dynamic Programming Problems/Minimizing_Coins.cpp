#include <bits/stdc++.h>
#define int long long int

using namespace std;

signed main()
{
    int n, x;
    cin >> n >> x;
    vector<int> coins(n);
    for (auto &i : coins)
        cin >> i;
    vector<int> dp(x + 1, 1e9);
    dp[0] = 0;
    for (int i = 1; i <= x; i++)
        for (auto j : coins)
            if (i - j >= 0)
                dp[i] = min(dp[i], dp[i - j] + 1);
    cout << ((dp[x] == 1e9) ? -1 : dp[x]) << "\n";
    return 0;
}