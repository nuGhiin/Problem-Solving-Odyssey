#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].first >> v[i].second;
        }

        bool flag = false;
        for (int i = 1; i < n; i++)
        {
            if (v[i].first >= v[0].first && v[i].second >= v[0].second)
            {
                cout << -1 << '\n';
                flag = true;
                break;
            }
        }

        if (!flag)
        {
            cout << v[0].first << endl;
        }
    }
    return 0;
}