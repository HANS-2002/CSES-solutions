#include <bits/stdc++.h>
#define int long long int

using namespace std;

const int maxSize = 2 * (1e5) + 1;

vector<int> g[maxSize];
vector<bool> vis(maxSize, false);

void dfs(int vertex, vector<int> &ans)
{
    vis[vertex] = true;
    ans[vertex] = 1;
    for (int child : g[vertex])
    {
        if (vis[child])
            continue;
        dfs(child, ans);
        ans[vertex] += ans[child];
    }
}

signed main()
{
    int n;
    cin >> n;
    vector<int> ans(n + 1, 0);
    for (int i = 2; i <= n; i++)
    {
        int x;
        cin >> x;
        g[x].push_back(i);
        g[i].push_back(x);
    }
    dfs(1, ans);
    for (int i = 1; i <= n; i++)
        cout << ans[i] - 1 << " ";
    return 0;
}