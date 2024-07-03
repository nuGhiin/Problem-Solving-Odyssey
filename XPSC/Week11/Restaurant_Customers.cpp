#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;

    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;  
        mp[l]++;
        mp[r + 1]--;
    }

    long long sum = 0, mx = INT_MIN;

    for (auto i : mp)
    {
        sum += (1LL * (i.second));
        mx = max(sum, mx);
    }
    cout << mx << endl;

    return 0;
}