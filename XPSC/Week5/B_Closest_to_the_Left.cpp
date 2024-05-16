/*prblm: https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/B*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k; cin>>n>>k;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    while(k--){
        int q; cin>>q;
        int l=0, r=n-1, ans=-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(q>=a[mid]){
                ans=mid;
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        cout<<ans+1<<'\n';
        

    }
    

return 0;
}