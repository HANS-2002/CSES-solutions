#include <bits/stdc++.h>
#define int long long int

using namespace std;

signed main()
{
    int n, ans = 0;
    cin >> n;
    int dp[50] = {0};
    dp[0] = 1;
    for (int i = 1; i < 50; i++)
        dp[i] = 2 * dp[i - 1] + ((1LL << (i - 1)) - 1);
    while (n > 0)
    {
        int b = log2(n);
        ans += dp[b];
        b = 1LL << b;
        ans += n - b;
        n -= b;
    }
    cout << ans;
    return 0;
}