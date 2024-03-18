#include <bits/stdc++.h>
using namespace std;
int main(){

    int a, b;
     cin>>a>>b;
    int cnt=0;
    if(a<b){
         for(int i=a; i<=b; i++){
            cnt++;
         }
         cout<<cnt<<endl;
    }
    else{
        cout<<0<<endl;
    }
   

return 0;
}