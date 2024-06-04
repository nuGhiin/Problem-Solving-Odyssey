#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    auto isPrime = [&](long long n)
    {
        if (n == 1)
        {
            return false;
        }
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    };

    auto sq = [&](long long  n)
    {
        long long  x = sqrtl(n);
        return (x * x) == n;
    };

    while (n--)
    {
        long long  x;
        cin >> x;
        if (isPrime(sqrtl(x)) && sq(x))
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