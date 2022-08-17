#include <bits/stdc++.h>
#define int long long int

using namespace std;

int gray(int n)
{
    return n ^ (n >> 1);
}

signed main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < pow(2, n); i++)
    {
        string ans = bitset<16>(gray(i))
                         .to_string()
                         .substr(16 - n, n);
        cout << ans << "\n";
    }
    return 0;
}