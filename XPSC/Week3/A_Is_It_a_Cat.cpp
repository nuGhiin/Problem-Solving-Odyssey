/*problem: https://codeforces.com/problemset/problem/1800/A*/

#include <bits/stdc++.h>
using namespace std;
int main(){

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        // for(int i=0; i<n; i++){
        //     cin>>s[i];
        // }

        for(char &i: s){
            i=tolower(i);
        }
        string ans="meow";
        string res, temp; //set<char> seen;

        for(char c: s){
            // if(seen.find(c) == seen.end()){
            //     res+=c;
            //     seen.insert(c);
            // }
            if(temp.empty() or c != temp.back()){
                temp+=c;
            }
        }
        //cout<<s<<endl;

        if(temp==ans){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }

return 0;
}