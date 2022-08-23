#include <bits/stdc++.h>
#define int long long int

using namespace std;

signed main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> vp(n);
    for (auto &i : vp)
        cin >> i.first >> i.second;
    sort(vp.begin(), vp.end(), [&](pair<int, int> a, pair<int, int> b)
         { return a.second < b.second; });
    int ans = 1;
    int end = vp[0].second;
    for (int i = 1; i < n; i++)
    {
        if (vp[i].first >= end)
        {
            ans++;
            end = vp[i].second;
        }
    }
    cout << ans << "\n";
    return 0;
}
