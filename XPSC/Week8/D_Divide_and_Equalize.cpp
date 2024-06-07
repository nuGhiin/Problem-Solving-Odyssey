#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int m;
        cin >> m;
        vector<int> v(m);
        for (int i = 0; i < m; i++)
        {
            cin >> v[i];
        }
        map<int, int> mp;
        for (int i = 0; i < m; i++)
        {
            for (int j = 2; j * j <= v[i]; j++)
            {
                if (v[i] % j == 0)
                {
                    while (v[i] % j == 0)
                    {
                        mp[j]++;
                        v[i] /= j;
                    }
                }
            }
            if (v[i] > 1)
            {
                mp[v[i]]++;
            }
        }

        bool ans = true;
        for (auto [x, y] : mp)
        {
            if (y % m != 0)
            {
                ans = false;
                break;
            }
        }
        if (ans)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}