/* 
Applying brute force:
#include <bits/stdc++.h>
using namespace std;
int main(){

    int n, q;
    cin>>n>>q;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    while(q--){ //query input nilam
        int l, r;
        cin>>l>>r;
        l--; // -'s reason: converting postion to index
        r--; // -'s reason: converting postion to index

        int sum=0; // sum ke vitor e decalare korsi karon: loop ti ekbar kaj kore jokhon abar kaj shuru korbe, sum jatee 0 hoy.

        for(int i=l; i<=r; i++){
            sum+=a[i];
        }
        cout<<sum<<endl;
    }
return 0;
} */

#include <bits/stdc++.h>
using namespace std;
int main(){

   long long int n, q;
    cin>>n>>q;

    long long int a[n];
    for(int i=0; i<n; i++){ // O(n)
        cin>>a[i];
    }
    
    long long int pref[n];
    pref[0]=a[0];
    for(int i=1; i<n; i++){ //prefix array //O(n)
        pref[i]=a[i]+pref[i-1];
    }

    while(q--){ //query input nilam //O(q)
        int l, r;
        cin>>l>>r;
        l--; // -'s reason: converting postion to index
        r--; // -'s reason: converting postion to index

        long long int sum;

        if(l==0){
            sum=pref[r];
        }
        else{
            sum=pref[r]-pref[l-1];
        }
        cout<<sum<<endl;   
    }
    // So time complexity = O(n+q)= (10^5+10^5) = O(10^5)
return 0;
} 