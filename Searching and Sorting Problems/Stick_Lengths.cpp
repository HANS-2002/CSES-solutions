#include <bits/stdc++.h>
#define int long long int

using namespace std;

signed main()
{
    int n;
    cin >> n;
    vector<int> p(n);
    for (auto &i : p)
        cin >> i;
    sort(p.begin(), p.end());
    int med = p[n / 2];
    int ans = 0;
    for (auto i : p)
        ans += abs(i - med);
    cout << ans << "\n";
    return 0;
}