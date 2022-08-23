#include <bits/stdc++.h>
#define int long long int

using namespace std;

signed main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int k1 = i * i, k2 = k1 * (k1 - 1) / 2;
        if (i > 2)
            k2 -= 4 * (i - 1) * (i - 2);
        cout << k2 << "\n";
    }
    return 0;
}