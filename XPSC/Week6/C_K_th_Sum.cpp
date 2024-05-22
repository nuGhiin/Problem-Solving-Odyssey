#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, k;
    cin >> n >> k;

    vector<int> v1(n), v2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    long long l = 2, r = 2e9;
    while (l < r)
    {
        long long mid = l + (r - l) / 2;
        long long cnt = 0;

        for (int i = 0; i < n; i++)
        {
            cnt += upper_bound(v2.begin(), v2.end(), mid - v1[i]) - v2.begin();
        }

        if (cnt >= k)
        {
            r = mid;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << l << endl;

    return 0;
}