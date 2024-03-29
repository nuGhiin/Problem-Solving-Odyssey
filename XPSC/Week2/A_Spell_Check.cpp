/*problem: https://codeforces.com/problemset/problem/1722/A*/
#include <bits/stdc++.h>
using namespace std;
int main(){

    int t; cin>>t;
    while(t--){
        string s;
        int n; cin>>n>>s;
        //vector<string> name(n);
        string name="Timur";
        map<char, int> real, tmp;
        if(n!=5){
            cout<<"NO"<<endl;
            continue;
        }

        // for(int i=0; i<n; i++){
        //     cin>>name[i];
        // }
        for(int i=0; i<n; i++){
            real[s[i]]++;
            tmp[name[i]]++;
        }
        if(real==tmp){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    

return 0;
}