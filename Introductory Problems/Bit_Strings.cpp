#include <bits/stdc++.h>
#define int long long int

using namespace std;

const int mod = 1e9 + 7;

signed main()
{
    int n;
    cin >> n;
    int ans = 1;
    while (n--)
    {
        ans <<= 1;
        ans %= mod;
    }
    cout << ans << "\n";
    return 0;
}