#include <bits/stdc++.h>
#define int long long int

using namespace std;

signed main()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    for (int i = 1; i < n; i++)
        v[i] += v[i - 1];
    while (q--)
    {
        int i, j;
        cin >> i >> j;
        i--, j--;
        if (i > 0)
            cout << v[j] - v[i - 1] << "\n";
        else
            cout << v[j] << "\n";
    }
    return 0;
}