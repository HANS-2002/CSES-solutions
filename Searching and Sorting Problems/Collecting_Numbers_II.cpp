#include <bits/stdc++.h>
#define int long long int

using namespace std;

signed main()
{
    int n, q, ans = 1;
    cin >> n >> q;
    vector<int> nums(n + 1), pos(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> nums[i];
        pos[nums[i]] = i;
    }
    for (int i = 1; i < n; i++)
        ans += (pos[i] > pos[i + 1]);
    set<pair<int, int>> sp;
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        if (nums[x] - 1 >= 1)
            sp.insert({nums[x] - 1, nums[x]});
        if (nums[x] + 1 <= n)
            sp.insert({nums[x], nums[x] + 1});
        if (nums[y] - 1 >= 1)
            sp.insert({nums[y] - 1, nums[y]});
        if (nums[y] + 1 <= n)
            sp.insert({nums[y], nums[y] + 1});
        for (auto i : sp)
            ans -= (pos[i.first] > pos[i.second]);
        swap(nums[x], nums[y]);
        pos[nums[x]] = x;
        pos[nums[y]] = y;
        for (auto i : sp)
            ans += (pos[i.first] > pos[i.second]);
        cout << ans << "\n";
        sp.clear();
    }
    return 0;
}