#include <bits/stdc++.h>
using namespace std;
int main(){

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<string> s(n);
        map<string, int> mp;
        for(int i=0; i<n; i++){
            cin>>s[i];
            mp[s[i]]++;
        }
        for(int i=0; i<n; i++){
            string word=s[i];
            bool res=false;
            for(int j=0; j<word.size(); j++){
                string a=word.substr(0,j);
                string b=word.substr(j, word.size());
                if(mp[a]!=0 and mp[b]!=0){
                    res=true;
                }
            }
            cout<<res;
        }
        
        cout<<endl;
    }

return 0;
}