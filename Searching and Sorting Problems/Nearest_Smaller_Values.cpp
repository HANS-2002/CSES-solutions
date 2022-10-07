#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    stack<pair<int, int>> st;
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && st.top().first >= a[i])
            st.pop();
        if (st.empty())
            cout << "0 ";
        else
            cout << st.top().second << " ";
        st.push({a[i], i + 1});
    }
    return 0;
}