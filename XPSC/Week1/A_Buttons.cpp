#include <bits/stdc++.h>
using namespace std;
int main(){

    int a, b;
    cin>> a>>b;
    int sameBtn = max(a, b) *2 -1;
    int bothBtn = a+b;

    cout<<max(sameBtn, bothBtn)<<endl;

return 0;
}