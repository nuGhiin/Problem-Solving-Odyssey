/*p: https://www.codechef.com/START135D/problems/CHANGEXY?tab=statement*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int T; cin>>T;
	while(T--){
	    long long A,B,K; cin>>A>>B>>K;
	    
	    long long res=0;
	    while(!0){
	        if(B%K==0 and B/K>=A){
	            res+=1;
	            B=B/K;
	        }
	        else if(B%K==0){
	            res+=B-A;
	            break;
	        }
	        else{
	            res+=B%K;
	            B=B-(B%K);
	        }
	    }
	    cout<<res<<endl;
	}

}
