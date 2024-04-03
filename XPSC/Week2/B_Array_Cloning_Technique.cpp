#include <bits/stdc++.h>
using namespace std;
int main(){

    int t; cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
            mx = max(mp[x], mx);
        }

        n -= mx;
        int cnt = n;

        while (n > 0)
        {
            cnt++;
            n -= mx;
            mx *= 2;
        }

        cout << cnt << endl;
    }

return 0;
}
