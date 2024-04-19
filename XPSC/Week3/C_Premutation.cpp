#include <bits/stdc++.h>
using namespace std;
int main(){

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n][n-1];
        for(int i=0; i<n; i++){
            for(int j=0; j<n-1; j++){
                cin>>a[i][j];
            }
        }
        
        map<int, int>mp;
        map<int, int>m;
        for(int i=0; i<n; i++){
            mp[a[i][n-2]]=i;
            m[a[i][n-2]]++;
        }
        int index=0, val;
        for(auto i: m){
            if(i.second==1){
                index=i.first;
            }
            else{
                val=i.first;
            }
        }
        for(int i=0; i<n-1; i++){
            cout<<a[mp[index]][i]<<" ";
        }
        cout<<val<<endl;
    }

return 0;
}