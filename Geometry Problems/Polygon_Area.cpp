#include <bits/stdc++.h>
#define int long long int

using namespace std;

struct point
{
    int x, y;
};

int area(point A, point B, point C)
{
    return A.x * (B.y - C.y) + B.x * (C.y - A.y) + C.x * (A.y - B.y);
}

signed main()
{
    int n;
    cin >> n;
    vector<point> v(n);
    for (auto &i : v)
        cin >> i.x >> i.y;
    point p1 = v[0];
    int ans = 0;
    for (int i = 1; i < n - 1; i++)
        ans += area(p1, v[i], v[i + 1]);
    cout << abs(ans) << "\n";
    return 0;
}