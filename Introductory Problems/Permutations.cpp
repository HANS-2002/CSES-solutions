#include <bits/stdc++.h>
#define int long long int

using namespace std;

signed main()
{
    int n;
    cin >> n;
    if (n == 1)
        cout << "1";
    else if (n == 2 || n == 3)
        cout << "NO SOLUTION";
    else
    {
        int odd = n & 1 ? n : n - 1;
        while (odd >= 1)
            cout << odd << " ", odd -= 2;
        int even = n & 1 ? n - 1 : n;
        while (even >= 2)
            cout << even << " ", even -= 2;
    }
    return 0;
}