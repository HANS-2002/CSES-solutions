#include <bits/stdc++.h>
#define int long long int

using namespace std;

signed main()
{
    string s;
    cin >> s;
    vector<string> ans;
    sort(s.begin(), s.end());
    ans.push_back(s);
    while (next_permutation(s.begin(), s.end()))
        ans.push_back(s);
    cout << ans.size() << "\n";
    for (auto i : ans)
        cout << i << "\n";
    return 0;
}