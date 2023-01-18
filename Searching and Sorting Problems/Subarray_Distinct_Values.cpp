#include <bits/stdc++.h>
#define int long long int

using namespace std;

signed main()
{
    int n, k;
    cin >> n >> k;
    vector<int> x(n);
    for (auto &i : x)
        cin >> i;
    int ans = 0, j = 0;
    map<int, int> occ;
    for (int i = 0; i < n; i++)
    {
        while (j < n && (occ.size() < k || occ.count(x[j]) > 0))
            occ[x[j++]]++;
        ans += j - i;
        occ[x[i]]--;
        if (!occ[x[i]])
            occ.erase(x[i]);
    }
    cout << ans << "\n";
    return 0;
}