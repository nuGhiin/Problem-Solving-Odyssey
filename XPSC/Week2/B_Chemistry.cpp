#include <bits/stdc++.h>
using namespace std;
int main(){

    int t; cin>>t;
    while(t--){
        int n, k; cin>>n>>k;
        string s; cin>>s;
        map<char, int>freq;
        for(int i=0; i<s.size(); i++){
            freq[s[i]]++;
        }

        int cnt=0;
        for(auto it: freq){
            if(it.second%2 != 0) cnt++;
        }
        if(cnt-1<0){
            cnt=0;
        }
        else{
            cnt=cnt-1;
        }
        if(k>=cnt && k<=n){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }

    }

return 0;
}