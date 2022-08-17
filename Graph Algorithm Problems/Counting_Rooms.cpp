#include <bits/stdc++.h>
#define int long long int

using namespace std;

char mat[1001][1001];
bool vis[1001][1001];
int r, c;

bool isValid(int x, int y)
{
    if (x < 1 || x > r || y < 1 || y > c)
        return false;
    if (vis[x][y] || mat[x][y] == '#')
        return false;
    return true;
}

void dfs(int x, int y)
{
    vis[x][y] = true;
    if (isValid(x - 1, y))
        dfs(x - 1, y);
    if (isValid(x + 1, y))
        dfs(x + 1, y);
    if (isValid(x, y - 1))
        dfs(x, y - 1);
    if (isValid(x, y + 1))
        dfs(x, y + 1);
}

signed main()
{
    cin >> r >> c;
    for (int i = 1; i <= r; i++)
        for (int j = 1; j <= c; j++)
            cin >> mat[i][j];
    int count = 0;
    for (int i = 1; i <= r; i++)
        for (int j = 1; j <= c; j++)
            if (mat[i][j] == '.' && !vis[i][j])
                dfs(i, j), count++;
    cout << count << "\n";
    return 0;
}