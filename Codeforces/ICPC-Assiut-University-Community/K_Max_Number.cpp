#include <bits/stdc++.h>
using namespace std;

int maxValue(int a[], int n, int i){
    if(i==n){//base case: array'r sesh index zodi n er soman hoye zay tokhon int min return kore dibe.
        return INT_MIN;
    }

    int an= maxValue(a, n, i+1);
    if(n==1){
        return a[0];
    }
    else{
        return max(a[i], an);
    }

}

int main(){

    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int ans= maxValue(a, n, 0);
   
    cout<<ans<<endl;

return 0;
}