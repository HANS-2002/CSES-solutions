#include <bits/stdc++.h>
#define int long long int

using namespace std;

vector<int> dp(1000001, -1);

int minSteps(int n)
{
    if (n == 0)
        return 0;
    if (dp[n] != -1)
        return dp[n];
    int ans = 1e9, temp = n;
    while (temp)
    {
        int x = temp % 10;
        if (x != 0)
            ans = min(ans, minSteps(n - x) + 1);
        temp /= 10;
    }
    return (dp[n] = ans);
}

signed main()
{
    int n;
    cin >> n;
    cout << minSteps(n) << "\n";
    return 0;
}