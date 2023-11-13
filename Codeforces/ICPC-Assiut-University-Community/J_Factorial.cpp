#include <bits/stdc++.h>
using namespace std;

long long int fact(long long int n){
    if(n==0){ //base case
        return 1;
    }

    long long int ans=fact(n-1);
    return ans*n;
}

int main(){

    long long int n;
    cin>>n;
    int a=fact(n);
    cout<<a<<endl;

return 0;
}