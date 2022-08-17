#include <bits/stdc++.h>
#define int long long int

using namespace std;

signed main()
{
    int n;
    cin >> n;
    set<int> s;
    while (n--)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    cout << s.size();
    return 0;
}