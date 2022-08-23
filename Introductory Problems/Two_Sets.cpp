#include <bits/stdc++.h>
#define int long long int

using namespace std;

void print(vector<int> v)
{
    cout << v.size() << "\n";
    for (auto i : v)
        cout << i << " ";
    cout << "\n";
}

signed main()
{
    int n;
    cin >> n;
    int sum = n * (n + 1) / 2;
    if (sum & 1)
        cout << "NO\n";
    else
    {
        sum /= 2;
        vector<int> s1, s2;
        int j = n, t = 0;
        while (t + j <= sum)
        {
            s1.push_back(j);
            t += j;
            j--;
        }
        if (t < sum)
            s1.push_back(sum - t);
        for (int i = 1; i <= j; i++)
            if (i != (sum - t))
                s2.push_back(i);
        cout << "YES\n";
        print(s1);
        print(s2);
    }
    return 0;
}