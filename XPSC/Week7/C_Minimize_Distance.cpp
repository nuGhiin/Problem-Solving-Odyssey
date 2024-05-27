#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long n, k;
        cin >> n >> k;
        vector<long> v1, v2;
        long mx = 0, mn = 0;
        for (int i = 0; i < n; i++)
        {
            long x;
            cin >> x;
            if (x < 0)
            {
                v1.push_back((x * -1));
            }
            else if (x > 0)
            {
                v2.push_back(x);
            }
        }

        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        long ans = 0;

        if (!v2.empty())
        {
            if (v2.size() < k)
            {
                mx = v2[v2.size() - 1];
                ans += mx;
            }
            else
            {
                mx = v2[v2.size() - 1];
                for (int i = 0; i < v2.size(); i++)
                {
                    if (i == v2.size() - 1)
                    {
                        ans += v2[i];
                    }
                    else if ((v2.size() - i - 1) % k == 0)
                    {
                        ans += v2[i] * 2;
                    }
                }
            }
        }

        if (!v1.empty())
        {
            if (v1.size() < k)
            {
                mn = v1[v1.size() - 1];
                ans += mn;
            }
            else
            {
                mn = v1[v1.size() - 1];
                for (int i = 0; i < v1.size(); i++)
                {
                    if (i == v1.size() - 1)
                    {
                        ans += v1[i];
                    }
                    else if ((v1.size() - i - 1) % k == 0)
                    {
                        ans += v1[i] * 2;
                    }
                }
            }
        }

        ans += min(mn, mx);
        cout << ans << endl;
    }

    return 0;
}