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
    int mx = v[0], curr_mx = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        curr_mx = max(v[i], curr_mx + v[i]);
        mx = max(mx, curr_mx);
    }
    cout << mx << "\n";
    return 0;
}