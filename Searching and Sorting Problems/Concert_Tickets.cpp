#include <bits/stdc++.h>
#define int long long int

using namespace std;

signed main()
{
    int n, m;
    cin >> n >> m;
    multiset<int> h;
    while (n--)
    {
        int x;
        cin >> x;
        h.insert(x);
    }
    while (m--)
    {
        int x;
        cin >> x;
        auto it = h.upper_bound(x);
        if (it == h.begin())
            cout << -1 << "\n";
        else
            cout << *(--it) << "\n",
                h.erase(it);
    }
    return 0;
}