#include <bits/stdc++.h>
using namespace std;

long long lcm(long long a, long long b) {
    return (a * b) / __gcd(a, b);
}

int main()
{
    long long n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;

    long long c = n / lcm(a, b);
    long long mx = max(p, q);
    long long ans = (((n / a) - c) * p) + (((n / b) - c) * q) + (c * mx);

    cout << ans << endl;

    return 0;
}
