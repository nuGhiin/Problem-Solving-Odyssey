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
        string s;
        cin >> s;
        bool flag = true;
        int zl = 0, ra = 0;
        for (int i = 0; i < n - 1; i += 2)
        {
            if (flag)
            {
                if (s[i] != s[i + 1])
                {
                    zl++;
                    flag = false;
                }
            }
            else
            {
                if (s[i] != s[i + 1])
                {
                    ra++;
                    flag = true;
                }
            }
        }
        if (ra >= zl)
        {
            cout << "Ramos" << '\n';
        }
        else
        {
            cout << "Zlatan" << '\n';
        }
    }

    return 0;
}