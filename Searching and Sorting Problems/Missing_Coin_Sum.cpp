#include <bits/stdc++.h>
#define int long long int

using namespace std;

signed main()
{
    int n;
    cin >> n;
    vector<int> x(n);
    for (auto &i : x)
        cin >> i;
    sort(x.begin(), x.end());
    int ans = 0;
    for (auto i : x)
    {
        if (ans + 1 < i)
            break;
        ans += i;
    }
    cout << ans + 1;
    return 0;
}