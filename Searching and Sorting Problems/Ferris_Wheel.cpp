#include <bits/stdc++.h>
#define int long long int

using namespace std;

signed main()
{
    int n, x;
    cin >> n >> x;
    vector<int> p(n);
    for (auto &i : p)
        cin >> i;
    sort(p.begin(), p.end());
    int ans = 0;
    for (int i = 0, j = n - 1; i <= j;)
    {
        if (p[i] + p[j] <= x)
            ans++, i++, j--;
        else
            ans++, j--;
    }
    cout << ans << "\n";
    return 0;
}