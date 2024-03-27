#include <bits/stdc++.h>
using namespace std;
int main(){

    long long int a, b;
    cin>>a>>b;
    int seq=0;
    while(a<=b){
        a=a*2;
        seq++;
    }
    cout<<seq<<endl;

return 0;
}