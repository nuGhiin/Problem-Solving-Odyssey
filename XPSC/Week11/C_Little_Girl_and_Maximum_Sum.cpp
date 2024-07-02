#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, q;
    cin >> n >> q;
    vector<long long> v1(n), v2(n + 2), v3(n + 1);

    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    while (q--)
    {
        long long l, r;
        cin >> l >> r;
        v2[l] += 1;
        v2[r + 1] -= 1;
    }

    for (int i = 1; i <= n; ++i)
    {
        v3[i] = v3[i - 1] + v2[i];
    }

    sort(v3.rbegin(), v3.rend());
    sort(v1.rbegin(), v1.rend());

    long long res = 0;
    for (int i = 0; i < n; i++)
    {
        res += (v3[i] * v1[i]);
    }

    cout << res << endl;
    return 0;
}