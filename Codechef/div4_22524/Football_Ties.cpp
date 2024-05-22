/*p:https://www.codechef.com/START135D/problems/FOOTBALLTIES */
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int x, y; cin>>x>>y;
	    
	    int res=max(x, y);
	    
	    int ans= res%3;
	    cout<<ans<<endl;
	}

}
