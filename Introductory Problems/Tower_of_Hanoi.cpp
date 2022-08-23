#include <bits/stdc++.h>
#define int long long int

using namespace std;

void toh(vector<pair<int, int>> &ans, int n, int from, int to, int use)
{
    if (!n)
        return;
    toh(ans, n - 1, from, use, to);
    ans.push_back({from, to});
    toh(ans, n - 1, use, to, from);
}

signed main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> ans;
    toh(ans, n, 1, 3, 2);
    cout << ans.size() << "\n";
    for (auto i : ans)
        cout << i.first << " " << i.second << "\n";
    return 0;
}