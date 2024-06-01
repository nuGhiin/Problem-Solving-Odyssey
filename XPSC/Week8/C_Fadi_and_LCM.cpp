#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long z;
    cin >> z;
    long long ans = 1;
    for (long long i = 1; i * i <= z; i++)
    {
        if (z % i == 0 && __gcd(i, z / i) == 1)
        {
            ans = i;
        }
    }
    cout << ans << " " << z / ans << endl;

    return 0;
}