#include <bits/stdc++.h>
using namespace std;
int main(){

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        // char color[2][n];
        // for(int i=0; i<2; i++){
        //     for(int j=0; j<n; j++){
        //         cin>>color[i][j];
        //     }
        // }

        // for(int i=0; i<2; i++){
        //     for(int j=0; j<n; j++){
        //         if(color[i][j]=='B'){
        //             color[i][j]='G';
        //         }
        //     }
        // }

        string c1, c2; cin>>c1>>c2;

        for(int i=0; i<n; i++){
            if(c1[i]=='B') c1[i]='G';
            if(c2[i]=='B') c2[i]='G';
        }
        if(c1==c2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;




        //  for(int i=0; i<2; i++){
        //     for(int j=0; j<n; j++){
        //         cout<<color[i][j];
        //     }
        //     cout<<endl;
        // }

    }

return 0;
}