#include <bits/stdc++.h>
#define int long long int

using namespace std;

signed main()
{
    int x, n, p;
    cin >> x >> n;
    set<int> lights{0, x};
    multiset<int> dist{x};
    while (n--)
    {
        cin >> p;
        auto it1 = lights.upper_bound(p);
        auto it2 = it1;
        --it2;
        dist.erase(dist.find(*it1 - *it2));
        dist.insert(p - *it2);
        dist.insert(*it1 - p);
        lights.insert(p);
        cout << *(--dist.end()) << " ";
    }
    return 0;
}