#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> v1(n), v2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v2[i];
        }

        bool flag = true;
        vector<long long> v3(n);
        long long x = INT64_MAX;
        
        for (int i = 0; i < n; i++)
        {
            if (v1[i] < v2[i])
            {
                flag = false;
                break;
            }
            v3[i] = v1[i] - v2[i];
            if (v2[i] != 0)
            {
                x = min(v3[i], x);
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (v3[i] < x && v3[i] - x > 0)
            {
                flag = false;
                break;
            }
            if (v3[i] > x)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}