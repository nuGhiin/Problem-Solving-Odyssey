/*problem: https://codeforces.com/problemset/problem/1703/C */

#include <bits/stdc++.h>
using namespace std;
int main(){

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int ar[n];
        for(int i=0; i<n; i++){
            cin>>ar[i];
        }

        int m; string s;
        for(int i=0; i<n; i++){
            cin>>m>>s;
            //cout<<m<<" "<<s<<endl;

             for(auto c: s){
            if(c=='D'){
                ar[i]++;
                if(ar[i]==10) ar[i]=0;
            }
            else{
                ar[i]--;
                if(ar[i]==-1) ar[i]=9;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<ar[i]<<" ";
    }

     cout<<endl;   

}

return 0;
}