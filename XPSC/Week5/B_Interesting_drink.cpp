#include <bits/stdc++.h>
using namespace std;
int main(){

    int n; cin>>n;
    vector<int> p(n);
    vector<int>f(1e5+1);
    vector<int>psum(1e5+1);
    for(int i=0; i<n; i++){
        cin>>p[i];
        f[p[i]]++;
    }

    psum[0]=0;
    for(int i=1; i<=1e5; i++){
        psum[i]=psum[i-1]+f[i];
    }


    int q; cin>>q;
    while(q--){
        int c; cin>>c;
        if(c>1e5){
            cout<<n<<endl;
        }
        else{
            cout<<psum[c]<<endl;
        }

    }

return 0;
}