/*problem: https://codeforces.com/problemset/problem/1807/D*/

#include <bits/stdc++.h>
using namespace std;
int main(){
   

    int t; cin>>t;
    while(t--){
        int n, q; cin>>n>>q;
        long long  a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        long long int presum[n];
        presum[0]=a[0];
        for(int i=1; i<n; i++){
            presum[i]=presum[i-1]+a[i];
        }

        while(q--){
           long long  l, r, k;
            cin>>l>>r>>k;
            long long  x=0;
            if(l==1){
                x=presum[r-1];
            }
            else{
                x=presum[r-1]-presum[l-2];
            }
            //long long int sum=(presum[n-1]-x) + (k*(r-l+1));
            long long sum=(r-l+1)*k;
            long long res=(presum[n-1]-x)+sum;
            //cout<<sum<<endl;
            if(res%2!=0){
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
    }

return 0;
}