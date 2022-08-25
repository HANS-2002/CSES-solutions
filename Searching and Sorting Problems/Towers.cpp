#include <bits/stdc++.h>
#define int long long int

using namespace std;

signed main()
{
    int n;
    cin >> n;
    vector<int> k(n);
    for (auto &i : k)
        cin >> i;
    multiset<int> ms;
    ms.insert(k[0]);
    for (int i = 1; i < n; i++)
    {
        auto tow = ms.upper_bound(k[i]);
        if (tow == ms.end())
            ms.insert(k[i]);
        else
        {
            ms.erase(tow);
            ms.insert(k[i]);
        }
    }
    cout << ms.size() << "\n";
    return 0;
}