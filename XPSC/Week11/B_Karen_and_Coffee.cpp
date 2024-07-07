#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, q;
    cin >> n >> k >> q;

    vector<int> a(200004, 0), bb(200005, 0);

    for (int i = 0; i < n; ++i) {
        int l, r;
        cin >> l >> r;
        a[l]++;
        a[r + 1]--;
    }

    for (int i = 1; i <= 200001; ++i)
        a[i] += a[i - 1];

    for (int i = 1; i <= 200001; ++i) {
        if (a[i] >= k)
            bb[i] = 1;
        else
            bb[i] = 0;
    }

    for (int i = 1; i <= 200001; ++i)
        bb[i] += bb[i - 1];

    while (q--) {
        int aa, b;
        cin >> aa >> b;
        cout << bb[b] - bb[aa - 1] << endl;
    }

    return 0;
}
