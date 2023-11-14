#include <bits/stdc++.h>
using namespace std;
int main(){

    char a[1001], b[1001];
    cin>>a;

    strcpy(b, a); // copying a string to b.


    int i, j, flag=1;
    i=0, j=strlen(b)-1; 
    
    while(i<j){

        int temp=b[i];
        b[i]=b[j];
        b[j]=temp;

        i++;
        j--;
    }

    if(strcmp(a, b)==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
   

return 0;
}