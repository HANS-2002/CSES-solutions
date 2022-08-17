#include <bits/stdc++.h>
#define int long long int

using namespace std;

void getLPS(string p, vector<int> &v)
{
    int pn = p.size();
    v[0] = 0;
    for (size_t i = 1, k = 0; i < pn; i++)
    {
        while (k > 0 && p[k] != p[i])
            k = v[k - 1];
        if (p[k] == p[i])
            v[i] = ++k;
        else
            v[i] = k;
    }
}

int getOccurences(string s, string p)
{
    int sn = s.size(), pn = p.size(), occurences = 0;
    vector<int> v(pn);
    getLPS(p, v);
    for (size_t i = 0, k = 0; i < sn; i++)
    {
        while (k > 0 && p[k] != s[i])
            k = v[k - 1];
        if (p[k] == s[i])
            k++;
        if (k == pn)
            occurences++;
    }
    return occurences;
}

signed main()
{
    string s, p;
    cin >> s >> p;
    cout << getOccurences(s, p) << "\n";
    return 0;
}