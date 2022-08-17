#include <bits/stdc++.h>
#define int long long int

using namespace std;

signed main()
{
    int n, sum = 0;
    cin >> n;
    int actSum = n * (n + 1) / 2;
    while (n-- > 1)
    {
        int x;
        cin >> x;
        sum += x;
    }
    cout << actSum - sum << "\n";
    return 0;
}