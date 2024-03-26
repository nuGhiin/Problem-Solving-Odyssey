#include <bits/stdc++.h>
using namespace std;
int main(){
        long long int a[3];
        for(int i=0; i<3; i++){
            cin>>a[i];
        }

        bool shot=false;
        for(int ebony=0; ebony*a[0]<=a[2]; ebony++){
            for(int ivory=0; ivory*a[1] <=a[2]; ivory++){
                if(ebony*a[0]+ivory*a[1] ==a[2]){
                    shot=true;
                    break;
                }
            }
            if(shot) break;
        }
        if(shot) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
return 0;
}