#include <bits/stdc++.h>
#define int long long int

using namespace std;

signed main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    vector<int> b(m);
    for (auto &i : b)
        cin >> i;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int ans = 0;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (abs(a[i] - b[j]) <= k)
            ans++,
                i++,
                j++;
        else if (a[i] < b[j])
            i++;
        else
            j++;
    }
    cout << ans << "\n";
    return 0;
}