#include <bits/stdc++.h>
#define int long long int

using namespace std;

struct point
{
    int x, y;
};

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        point p1, p2, p3;
        cin >> p1.x >> p1.y;
        cin >> p2.x >> p2.y;
        cin >> p3.x >> p3.y;
        double ans = (p3.x - p2.x) * (p2.y - p1.y) - (p2.x - p1.x) * (p3.y - p2.y);
        if (ans == 0)
            cout << "TOUCH\n";
        else if (ans < 0)
            cout << "LEFT\n";
        else
            cout << "RIGHT\n";
    }
    return 0;
}