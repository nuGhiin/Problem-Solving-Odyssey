#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    long long m, n, o, p, q, t, r, a = 0, b = 0, c = 0;
    cin >> m >> n >> o >> p >> q >> t >> r;

    for (auto &ch : s)
    {
        if (ch == 'B')
        {
            a++;
        }
        else if (ch == 'S')
        {
            b++;
        }
        else
        {
            c++;
        }
    }
    long long ans = r + 200, L = 0;
    while (ans >= L)
    {
        long long mid = L + (ans - L) / 2;
        long long w, x, y, z = 0;
        w = max(a * mid - m, z);
        x = max(b * mid - n, z);
        y = max(c * mid - o, z);
        long long prc = w * p + x * q + y * t;
        if (prc <= r)
        {
            L = mid + 1;
        }
        else
        {
            ans = mid - 1;
        }
    }
    cout << ans << endl;

    return 0;
}