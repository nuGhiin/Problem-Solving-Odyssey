#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, f, k;
        cin >> n >> f >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int fav = a[f - 1];
        sort(a.rbegin(), a.rend());
        
        int cFav = count(a.begin(), a.begin() + k, fav);
        int tFav = count(a.begin(), a.end(), fav);
        
        if (cFav == 0) {
            cout << "NO" << '\n';
        } else if (tFav== cFav) {
            cout << "YES" << '\n';
        } else {
            cout << "MAYBE" << '\n';
        }
    }
 return 0;
}
