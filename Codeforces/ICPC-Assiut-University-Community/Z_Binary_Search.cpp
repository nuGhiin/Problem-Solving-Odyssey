#include <bits/stdc++.h>
using namespace std;
int main(){

    int n, q;
    cin>>n>>q;
    int a[n];
    for(int i=0; i<n; i++){ //--> O(N)
        cin>>a[i];
    }
    sort(a, a+n);//-->O(NlogN)

    while(q--){//O(q)
        int x;
        cin>>x;
        bool flag=false;
        int l=0; int r=n-1;
        while(l<=r){//-->O(logN)
            int midIndex=(l+r)/2;
            if(a[midIndex]==x){
                flag=true;
                break;
            }
            if(x>a[midIndex]){
                //>>right
                l=midIndex+1;
            }
            else{
                //>>left
                r=midIndex-1;
            }
        } //--> total complexity: O(NlogN) hence q==n;
        if(flag==true){cout<<"found"<<endl;}
        else{cout<<"not found"<<endl;}

    }

return 0;
}