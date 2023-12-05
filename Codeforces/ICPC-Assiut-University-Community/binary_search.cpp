#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int x; cin>>x;
    int l=0;
    int r=n-1;
    bool flag=false;
    while(l<=r){

        int midIndex=(l+r)/2;
        if(a[midIndex]==x){
            flag=true;
            break;
        }
        if(x>a[midIndex]){
            //go to right
            l=midIndex+1;
        }
        else{
            //go to left
            r=midIndex-1;
        }
    }
    if(flag==true){cout<<"Yes"<<endl;}
    else{cout<<"no"<<endl;}

return 0;
}