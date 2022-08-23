#include <bits/stdc++.h>
#define int long long int

using namespace std;

int digit(int n, int i)
{
    return (i ? digit(n / 10, i - 1) : n % 10);
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ind = 1, pow = 1;
        cin >> n;
        while (pow * 9 * ind < n)
        {
            n -= pow * 9 * ind;
            ind++;
            pow *= 10;
        }
        cout << digit(pow + (n - 1) / ind, ind - 1 - (n - 1) % ind) << "\n";
    }
    return 0;
}