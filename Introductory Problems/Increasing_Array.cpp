#include <bits/stdc++.h>
#define int long long int

using namespace std;

signed main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (v[i] < v[i - 1])
        {
            ans += v[i - 1] - v[i];
            v[i] = v[i - 1];
        }
    }
    cout << ans << "\n";
    return 0;
}