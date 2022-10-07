#include <bits/stdc++.h>
#define int long long int

using namespace std;

signed main()
{
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        int l = i + 1, r = n - 1;
        while (l < r)
        {
            if (a[i].first + a[l].first + a[r].first == x)
            {
                cout << a[i].second << " " << a[l].second << " " << a[r].second << "\n";
                return 0;
            }
            else if (a[i].first + a[l].first + a[r].first < x)
                l++;
            else
                r--;
        }
    }
    cout << "IMPOSSIBLE\n";
    return 0;
}