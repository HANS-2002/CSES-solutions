#include <bits/stdc++.h>
#define int long long int

using namespace std;

signed main()
{
    char c;
    string s;
    cin >> s;
    int n = s.size(), o = 0;
    unordered_map<char, int> mp;
    for (auto i : s)
        mp[i]++;
    for (auto i : mp)
        if (i.second & 1)
            o++, c = i.first;
    string ans = "";
    if (n & 1)
    {
        if (o > 1)
            cout << "NO SOLUTION\n";
        else
        {
            for (auto i : mp)
            {
                int k = i.second;
                if (!(k & 1))
                {
                    k /= 2;
                    while (k--)
                        ans += i.first;
                }
            }
            string temp = ans;
            reverse(temp.begin(), temp.end());
            while (mp[c]--)
                ans += c;
            ans += temp;
            cout << ans << "\n";
        }
    }
    else
    {
        if (o)
            cout << "NO SOLUTION\n";
        else
        {
            for (auto i : mp)
            {
                int k = i.second;
                k /= 2;
                while (k--)
                    ans += i.first;
            }
            string temp = ans;
            reverse(temp.begin(), temp.end());
            ans += temp;
            cout << ans << "\n";
        }
    }
    return 0;
}