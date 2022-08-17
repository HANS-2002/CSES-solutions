#include <bits/stdc++.h>
#define int long long int

using namespace std;

signed main()
{
    string s;
    cin >> s;
    int currLen = 1, maxLen = 1;
    char ch = s[0];
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == ch)
            currLen++;
        else
        {
            maxLen = max(maxLen, currLen);
            ch = s[i];
            currLen = 1;
        }
    }
    maxLen = max(maxLen, currLen);
    cout << maxLen << "\n";
    return 0;
}