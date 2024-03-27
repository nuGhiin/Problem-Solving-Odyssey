#include <bits/stdc++.h>
using namespace std;
int main(){

    string s;
    cin>>s;
    int a[26]={0};

    for(int i=0; i<s.length(); i++){
        a[s[i]-97]=1;
    }
    for(int i=0; i<26; i++){
        if(a[i]==0){
            char c= i+97; 
            cout<<c<<endl;
            break;
        }
    }
    cout<<"None"<<endl;

return 0;
}