#include <bits/stdc++.h>
#define int long long int

using namespace std;

const int mod = 1e9 + 7;

int fastPow(int x, int y)
{
    int POW = 1;
    x = x % mod;
    while (y > 0)
    {
        if (y & 1)
            POW = (POW * x) % mod;
        y = y >> 1;
        x = (x * x) % mod;
    }
    return POW;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a == 0 && b == 0)
            cout << "1\n";
        else if (a == 0)
            cout << "0\n";
        else if (b == 0)
            cout << "1\n";
        else
            cout << fastPow(a, b) << "\n";
    }
    return 0;
}