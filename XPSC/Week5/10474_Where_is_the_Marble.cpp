#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, j = 0;
    while (cin >> n)
    {
        int q;
        cin >> q;
        if (n == 0)
            return 0;
        vector<int>arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());
        cout << "CASE# " << ++j << ":" << '\n';

        while (q--)
        {
            int k;
            cin >> k;
            int l = 0, r = n - 1, ans = -1;
            while (l <= r)
            {
                int mid = (l + r) / 2;
                if (k == arr[mid])
                {
                    ans = mid + 1;
                    r = mid - 1;
                }
                else if (k > arr[mid])
                {
                    l = mid + 1;
                }
                else
                {
                    r = mid - 1;
                }
            }
            if (ans != -1)
                cout << k << " found at " << ans << endl;
            else
                cout << k << " not found" << endl;
        }
    }

    return 0;
}