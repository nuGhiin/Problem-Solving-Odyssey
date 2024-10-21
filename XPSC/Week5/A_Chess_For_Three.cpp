#include <bits/stdc++.h>
using namespace std;
int main(){

    int t; cin>>t;
    while(t--){
        int p1, p2, p3; cin>>p1>>p2>>p3;
        int tp=p1+p2+p3;

        if(p1 ==1 and p2==1 and p3==1)
        if(tp%2!=0){
            cout<<-1<<endl;
            continue;
        }
        int maxp=p3;
        int minp=p1;

        int maxd=minp;
        int tg=tp/2;

        if(maxp>tg) cout<<-1<<endl;
        else cout<<maxd<<endl;

    }

return 0;
}