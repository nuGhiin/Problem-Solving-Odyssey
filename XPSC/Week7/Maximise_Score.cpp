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
        vector<int>arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int f = abs(arr[0] - arr[1]);
        int l = abs(arr[n - 1] - arr[n - 2]);
        int res = min(l, f);

        for (int i = 1; i < n - 1; i++)
        {
            int a = abs(arr[i] - arr[i + 1]);
            int b = abs(arr[i] - arr[i - 1]);

            int x = max(a, b);
            res = min(res, x);
        }

        cout << res << endl;
    }

    return 0;
}