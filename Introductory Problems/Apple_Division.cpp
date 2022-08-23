//Can be optimized probably by using "meet in the middle" , 
//if anyone wants to do that please contribute 

#include <bits/stdc++.h>
#define int long long int

using namespace std;

signed main()
{
    int n, ans = INT_MAX;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    for (int i = 0; i < pow(2, n); i++)
    {
        int sum1 = 0, sum2 = 0;
        for (int j = 0; j < n; j++)
        {
            if (i & 1 << j)
                sum1 += v[j];
            else
                sum2 += v[j];
        }
        ans = min(ans, abs(sum1 - sum2));
    }
    cout << ans << "\n";
    return 0;
}