#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        map<int, int> freq;

        for (int i = 0; i < n; i++) {
            freq[a[i]]++;
        }
        int del=0;
        for(auto i: freq){
            del+=(i.second-1);
        }
        int ans=n-del;
        
        if(del%2==1) ans--;

        cout<<ans<<endl;
        

    }

    return 0;
}
