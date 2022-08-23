#include <bits/stdc++.h>
#define int long long int

using namespace std;

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r, c;
        cin >> r >> c;
        int k1 = max(r, c);
        int k2 = (k1 - 1) * (k1 - 1);
        int ans;
        if (k1 & 1)
        {
            if (r == k1)
                ans = k2 + c;
            else
                ans = k2 + 2 * k1 - r;
        }
        else
        {
            if (c == k1)
                ans = k2 + r;
            else
                ans = k2 + 2 * k1 - c;
        }
        cout << ans << "\n";
    }
    return 0;
}