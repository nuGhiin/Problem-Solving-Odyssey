#include <bits/stdc++.h>
using namespace std;
int main(){

    int m, n;
    cin >> m >> n;

    vector<tuple<int, int, int>> v1(n);
    for (int i = 0; i < n; i++)
    {
        int t, z, y;
        cin >> t >> z >> y;
        v1[i] = make_tuple(t, z, y);
    }

    vector<int> v2(n);
    auto ok = [&](int mid)
    {
        vector<int> may(n);
        int h = m;
        for (int i = 0; i < n; i++)
        {
            tuple<int, int, int> T = v1[i];
            int t, z, y, p, q, r, cur;
            t = get<0>(T);
            z = get<1>(T);
            y = get<2>(T);
            p = ((t * z) + y);
            q = (mid / p);
            r = mid % p;
            cur = ((q * z) + min(z, (r / t)));
            cur = min(h, cur);
            h -= cur;
            may[i] = cur;
        }
        if (!h)
        {
            for (int i = 0; i < n; i++)
            {
                v2[i] = may[i];
            }
        }
        return (!h);
    };

    int l = 0, r = 1e8, mid, ans;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << ans << endl;
    for (auto val : v2)
    {
        cout << val << " ";
    }
    cout << endl;

return 0;
}