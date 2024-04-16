
/*problem: https://codeforces.com/problemset/problem/1676/D*/
#include <bits/stdc++.h>
using namespace std;
int main(){

    int t; cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        int c[n][m];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>c[i][j];
            }
        }
        int ans=0, sum, x, y;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){

                sum=c[i][j];
                x=j-1; y=j+1;
                for(int k=i-1; k>=0; k--){
                    if(x>=0){
                        sum+=c[k][x];
                        x--;
                    }
                    if(y<m){
                        sum+=c[k][y];
                        y++;
                    }
                }

                x=j-1; y=j+1;
                for(int k=i+1; k<n; k++){
                    if(x>=0){
                        sum+=c[k][x];
                        x--;
                    }
                    if(y<m){
                        sum+=c[k][y];
                        y++;
                    }  
                }
                

               // int sum=c[i][j];

                // if(i>0 and j>0){
                //     sum+=c[i-1][j-1];
                // } 
                // if(i<=n and j>0){
                //     sum+=c[i+1][j-1];
                // }
                // if(i>0 and j<=m){
                //     sum+=c[i-1][j+1];
                // }
                // if(i<=n and j<=m){
                //     sum+=c[i+1][i+1];
                // }
                // ans=max(ans, sum);
                
                
                
                ans=max(ans, sum);
               
            }
        }

cout<<ans<<endl;
    }

return 0;
}