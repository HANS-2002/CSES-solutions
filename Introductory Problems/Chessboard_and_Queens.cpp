#include <bits/stdc++.h>
#define int long long int

using namespace std;

signed main()
{
    string mat[8];
    bool check[15];
    for (int i = 0; i < 8; ++i)
        cin >> mat[i];
    int count[8], ans = 0;
    iota(count, count + 8, 0);
    do
    {
        bool ok = true;
        for (int i = 0; i < 8; ++i)
            ok &= mat[i][count[i]] == '.';
        memset(check, false, 15);
        for (int i = 0; i < 8; ++i)
        {
            if (check[i + count[i]])
                ok = false;
            check[i + count[i]] = true;
        }
        memset(check, false, 15);
        for (int i = 0; i < 8; ++i)
        {
            if (check[i + 7 - count[i]])
                ok = false;
            check[i + 7 - count[i]] = true;
        }
        ans += ok;
    } while (next_permutation(count, count + 8));
    cout << ans;
    return 0;
}