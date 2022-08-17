#include <bits/stdc++.h>
#define int long long int

using namespace std;

signed main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        int m = 2 * x - y;
        int n = 2 * y - x;
        if (m >= 0 && n >= 0 && m % 3 == 0 && n % 3 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}