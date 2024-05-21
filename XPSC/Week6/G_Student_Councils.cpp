#include <bits/stdc++.h>
using namespace std;

vector<int> v;

bool check(int k, int x)
{
    int tmp = x;
    x *= k;
    for (auto el : v)
        x -= min(tmp, el);
    return x <= 0;
}

int main()
{

    int x, n;
    cin >> x >> n;
    v.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int l = 0, r = 1e12, mid;
    while (l + 1 < r)
    {
        mid = (l + r) / 2;
        if (check(x, mid))
        {
            l = mid;
        }
        else
        {
            r = mid;
        }
    }
    cout << l;

    return 0;
}