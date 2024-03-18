#include <bits/stdc++.h>
using namespace std;
int main(){

    int a, b, c;
    cin>>a>>b>>c;
    int store=-1;
    for(int i=a; i<=b; i++){
        if(i % c == 0){
            store=i;
            break;
        }
    }
    cout<<store<<endl;

return 0;
}