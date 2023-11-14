#include <bits/stdc++.h>
using namespace std;
int main(){

    char a[1001];
    cin>>a;

    int i, j, flag=1;
    i=0, j=strlen(a)-1; // two pointer techniques
    
    while(i<j){

        if(a[i]!=a[j]){

            flag=0;
            break;

        }

        i++;
        j--;
    }
    if(flag==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

return 0;
}