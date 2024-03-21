#include <bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n;
    cin>>n;
    long long int ar[n];
    long long int sum=0;

    for(int i=0; i<n; i++){
        cin>>ar[i];
        sum+=ar[i];
    }

    if(sum%2 == 0){
        cout<<sum<<'\n';
    }
    else{
        sort(ar, ar+n);
        long long int sum1=0;
        for(int i=0; i<n; i++){
            sum1=sum-ar[i];
            if(sum1%2==0){
                cout<<sum1<<'\n';
                break;
            }
        }
    }

return 0;
}
