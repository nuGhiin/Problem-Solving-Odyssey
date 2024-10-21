#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    set<int> s;
    int ans = -1, start = 0;
    for (int i = 0; i < n; i++)
    {

        while (s.count(v[i]))
        {
            s.erase(v[start]);
            start++;
        }
        s.insert(v[i]);
        ans = max(ans, int(s.size()));
    }

    cout << ans << endl;

    return 0;
}