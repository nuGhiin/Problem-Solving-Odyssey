#include <bits/stdc++.h>
using namespace std;
int main(){

    int n; cin>>n;
    vector<int>piles(n);
    vector<int>pre(n);
    for(int i=0; i<n; i++){
        cin>>piles[i];
    }
    pre[0]=piles[0];
    for(int i=1; i<n; i++){
        pre[i]=pre[i-1]+piles[i];
    }
    int m; cin>>m;
    while(m--){
        int q; cin>>q;
        auto it=lower_bound(pre.begin(),pre.end(), q);
        cout<<(it-pre.begin())+1<<endl;
    }

return 0;
}