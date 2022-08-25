#include <bits/stdc++.h>
#define int long long int

using namespace std;

signed main()
{   
    int n, ans = 1;
    cin >> n;
    vector<int> nums(n), pos(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
        nums[i]--;
        pos[nums[i]] = i;
    }
    for (int i = 1; i < n; i++)
        ans += (pos[i] < pos[i - 1]);
    cout << ans << "\n";
    return 0;
}