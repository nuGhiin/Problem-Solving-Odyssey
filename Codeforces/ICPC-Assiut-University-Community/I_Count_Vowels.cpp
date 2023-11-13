#include <bits/stdc++.h>
using namespace std;

int count(char s[], int i){
    if(s[i]=='\0'){ //base case
        return 0;
    }

    int ans= count(s, i+1);

    if(s[i]>='A' && s[i]<='Z'){
        s[i]=s[i]+32;
    }
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
        return ans+1;
    }
    else{
        return ans;
    }

}

int main(){

    char s[201];
    cin.getline(s, 201);

    int n=count(s,0);
    cout<<n<<endl;
    

return 0;
}