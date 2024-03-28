#include <bits/stdc++.h>
using namespace std;
int main(){

    int x, y; cin>>x>>y;
    int ar[x];
    vector<int> a;
    for(int i=0; i<x; i++){
        cin>>ar[i];
        if(ar[i]!=y){
            a.push_back(ar[i]);
        }
    }
    for(int it: a){
        cout<<it<<" ";
    }


return 0;
}