#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    vector<long long> v(x);

    for (int i = 0; i < x; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    while (y--)
    {
        long long z;
        cin >> z;
        int a = (upper_bound(v.begin(), v.end(), z) - v.begin());
        cout << a << " ";
    }

    return 0;
}