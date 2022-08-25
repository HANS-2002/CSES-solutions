#include <bits/stdc++.h>
#define int long long int

using namespace std;

signed main()
{
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first;
        v[i].second = i;
    }
    sort(v.begin(), v.end());
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (v[i].first + v[j].first == x)
        {
            cout << v[i].second + 1 << " " << v[j].second + 1 << "\n";
            return 0;
        }
        else if (v[i].first + v[j].first < x)
            i++;
        else
            j--;
    }
    cout << "IMPOSSIBLE\n";
    return 0;
}