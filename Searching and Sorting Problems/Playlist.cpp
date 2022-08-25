#include <bits/stdc++.h>
#define int long long int

using namespace std;

signed main()
{
    int n;
    cin >> n;
    vector<int> k(n);
    for (auto &i : k)
        cin >> i;
    int ans = 0;
    map<int, int> lastIndex;
    for (auto i : k)
        lastIndex[i] = -1;
    int open = 0, close = 0;
    for (close = 0; close < n; close++)
    {
        open = max(open, lastIndex[k[close]] + 1);
        ans = max(ans, close - open + 1);
        lastIndex[k[close]] = close;
    }
    cout << ans << "\n";
    return 0;
}