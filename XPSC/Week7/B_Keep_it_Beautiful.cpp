#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, m, f = 0;
        cin >> n >> m;
        long long mn = m, mx = m;
        string s;
        s += "1";
        for (int i = 0; i < n - 1; i++)
        {
            int x;
            cin >> x;
            if (x >= mx && f == 0)
            {
                s += "1";
                mx = x;
            }
            else
            {
                if (x <= mn)
                {
                    if (f == 1)
                    {
                        if (x <= mn && x >= mx)
                        {
                            s += "1";
                            mx = x;
                        }
                        else
                        {
                            s += "0";
                        }
                    }
                    else
                    {
                        s += "1";
                        mx = x;
                        f++;
                    }
                }
                else
                {
                    s += "0";
                }
            }
        }
        cout << s << endl;
    }

    return 0;
}