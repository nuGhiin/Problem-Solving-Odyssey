#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, x;
    cin >> n >> x;

    vector<pair<long long, long long>> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back({x, i + 1});
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n - 2; i++)
    {
        if (v[i].first < x - 1)
        {
            int l = i + 1, r = n - 1, sum = x - v[i].first;
            while (l < r)
            {
                if (v[l].first + v[r].first == sum)
                {
                    cout << v[i].second << " " << v[l].second << " " << v[r].second << endl;
                    return 0;
                }
                else if (v[l].first + v[r].first > sum)
                {
                    r--;
                }
                else
                {
                    l++;
                }
            }
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}