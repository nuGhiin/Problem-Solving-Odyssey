#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> v(n);

        for (long long i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        long long a = v[0], b = v[1];
        for (long long i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                a = __gcd(a, v[i]);
            }
            else
            {
                b = __gcd(b, v[i]);
            }
        }
        long long f = 0, g = 0;
        for (long long i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                if (v[i] % b == 0)
                {
                    f++;
                    break;
                }
            }
        }
        for (long long i = 0; i < n; i++)
        {
            if (i % 2 != 0)
            {
                if (v[i] % a == 0)
                {
                    g++;
                    break;
                }
            }
        }
        if (f == 0)
        {
            cout << b << endl;
        }
        else if (g == 0)
        {
            cout << a << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
    return 0;
}