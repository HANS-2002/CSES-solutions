#include <bits/stdc++.h>
#define int long long int

using namespace std;

signed main()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    int ans = 0;
    int l = 0, r = 0, sum = 0;
    while (r < n)
    {
        sum += a[r];
        while (sum > x)
        {
            sum -= a[l];
            l++;
        }
        ans += (sum == x);
        r++;
    }
    cout << ans << "\n";
    return 0;
}