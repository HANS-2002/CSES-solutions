#include <bits/stdc++.h>
#define int long long int

using namespace std;

struct point
{
    int x, y;
};

int orientation(point p1, point p2, point p3)
{
    int val = (p2.y - p1.y) * (p3.x - p2.x) - (p2.x - p1.x) * (p3.y - p2.y);
    if (val < 0)
        val = -1;
    else if (val > 0)
        val = 1;
    else
        val = 0;
    return val;
}

bool onSegment(point p1, point p2, point p3)
{
    return (p3.x <= max(p1.x, p2.x) && p3.x >= min(p1.x, p2.x) && p3.y <= max(p1.y, p2.y) && p3.y >= min(p1.y, p2.y));
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        point p1, p2, p3, p4;
        cin >> p1.x >> p1.y;
        cin >> p2.x >> p2.y;
        cin >> p3.x >> p3.y;
        cin >> p4.x >> p4.y;
        int o1 = orientation(p1, p2, p3);
        int o2 = orientation(p1, p2, p4);
        int o3 = orientation(p3, p4, p1);
        int o4 = orientation(p3, p4, p2);
        if (o1 != o2 && o3 != o4)
            cout << "YES\n";
        else if (o1 == 0 && onSegment(p1, p2, p3))
            cout << "YES\n";
        else if (o2 == 0 && onSegment(p1, p2, p4))
            cout << "YES\n";
        else if (o3 == 0 && onSegment(p3, p4, p1))
            cout << "YES\n";
        else if (o4 == 0 && onSegment(p3, p4, p2))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}