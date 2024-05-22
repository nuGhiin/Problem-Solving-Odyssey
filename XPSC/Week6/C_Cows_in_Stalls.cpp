#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int l = 0, r = v[n - 1] - v[0] + 10;
    while (l + 1 < r)
    {
        long long mid = (l + r) / 2;
        bool flag = true;
        int cnt = 1;
        for (int i = 0; i < n; i++)
        {
            int j = i + 1;
            while (j < n)
            {
                if (v[i] + mid <= v[j])
                {
                    break;
                }
                j++;
            }
            if (j == n)
            {
                break;
            }
            cnt++;
            i = j - 1;
        }
        if (cnt >= k)
        {
            l = mid;
        }
        else
        {
            r = mid;
        }
    }

    cout << l << endl;

    return 0;
}