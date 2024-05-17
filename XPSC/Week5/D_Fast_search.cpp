#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n; 
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    int k; cin>>k;
    while(k--){
        int q1, q2; cin>>q1>>q2;
        int l = 0, r = n - 1, x = n;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (q1 <= a[mid])
            {
                x = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        l = 0, r = n - 1;
        int y = -1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (q2 >= a[mid])
            {
                y = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        cout << y - x + 1 << " ";
    }

    

return 0;
}