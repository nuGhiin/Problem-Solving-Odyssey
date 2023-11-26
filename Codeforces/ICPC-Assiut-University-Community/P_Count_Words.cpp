/*#include <bits/stdc++.h>
using namespace std;
int main(){

    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;

    int cnt=0;

    while(ss>>word){
        int flag=1;
        for(char c:word){
            if((c>='a' && c<='z')||(c>='A'&&c<='Z')){
                flag=0;
                break;
            }
        }
        if(flag==0){
            cnt++;
        }
    }
    cout<<cnt<<endl;


return 0;
}*/

#include <bits/stdc++.h>
using namespace std;
int main(){

    string s;
    getline(cin, s);

    bool inside_word=false;
    int cnt =0;

    for(char c:s){
        if(isalpha(c)){
            if(inside_word==false){
                cnt++;
                
            }
            inside_word=true;
        }
        else{
            inside_word=false;
        }
    }
    cout<<cnt<<endl;


return 0;
}