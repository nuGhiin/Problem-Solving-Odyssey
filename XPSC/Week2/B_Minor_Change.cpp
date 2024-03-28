#include <bits/stdc++.h>
using namespace std;
int main(){

    string s, t; cin>>s>>t;
    int ops=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]!=t[i]){
            ops++;
        }
    }
    cout<<ops<<endl;

return 0;
}
/*problem: https://atcoder.jp/contests/abc172/tasks/abc172_b?lang=en*/