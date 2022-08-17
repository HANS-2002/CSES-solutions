#include <bits/stdc++.h>
#define int long long int

using namespace std;

vector<int> dp(1e6 + 2, 0);
const int mod = 1e9 + 7;

int rec(int n)
{
    if (dp[n] != 0)
        return dp[n];
    for (int i = 1; i <= 6; i++)
        if (n - i >= 0)
            dp[n] = (dp[n] + rec(n - i)) % mod;
    return dp[n];
}

signed main()
{
    int n;
    cin >> n;
    dp[0] = 1;
    cout << rec(n) << "\n";
    return 0;
}