#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define int long long int

using namespace std;
using namespace __gnu_pbds;
template <class T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

signed main()
{
    int n, k;
    cin >> n >> k;
    ordered_set<int> os;
    for (int i = 1; i <= n; ++i)
        os.insert(i);
    int pos = 0;
    while (os.size() > 1)
    {
        pos = (pos + k) % (int)os.size();
        cout << *(os.find_by_order(pos)) << ' ';
        os.erase(*(os.find_by_order(pos)));
        pos %= (int)os.size();
    }
    cout << *(os.find_by_order(0)) << "\n";
    return 0;
}