#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> arr(n); ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        sort(arr.begin(), arr.end());
        reverse(arr.begin(), arr.end());
        ll x[n];
        x[0] = arr[0];
        for (ll i = 1; i < n; i++)
        {
            x[i] = arr[i] + x[i - 1];
        }
        while (k--)
        {
            ll key;
            cin >> key;
            auto it = lower_bound(x, x + n, key);
            if (it - x != n)
                cout << it - x + 1 << '\n';
            else
                cout << "-1" << '\n';
        }
    }

    return 0;
}