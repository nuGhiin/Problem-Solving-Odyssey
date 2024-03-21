#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--){

        int n;
        cin>> n;
        int ar[n];
        long long int ans=0, ind=0, res;
        

        for(int i=1; i<=n; i++){
            cin>>ar[i];
            ans=ar[1]-1;
            ind=ans;
        }
        for(int i=2; i<=n; i++){
            if(ind+i<ar[i]){
                res= ar[i]-(ind+i);
                ind+=res;
                ans+=res;
            }   
        }

        cout<<ans<<'\n';


    }

return 0;
}