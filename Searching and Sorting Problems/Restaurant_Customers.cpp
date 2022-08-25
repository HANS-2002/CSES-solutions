#include <bits/stdc++.h>
#define int long long int

using namespace std;

signed main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> vp;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        vp.push_back({x, 1});
        vp.push_back({y, -1});
    }
    sort(vp.begin(), vp.end());
    int ans = 0, count = 0;
    for (auto i : vp)
    {
        count += i.second;
        ans = max(ans, count);
    }
    cout << ans;
    return 0;
}