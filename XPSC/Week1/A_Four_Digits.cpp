#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;

    string N= to_string(n);


    if(N.length()<4){
        while(N.length() <4){
        N= '0'+N;
    }
    cout<<N<<endl;
    }
    else{
        cout<<N;
    }   

return 0;
}