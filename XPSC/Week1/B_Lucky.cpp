#include <bits/stdc++.h>
using namespace std;
int main(){

    int testCases;
    cin >> testCases;
    while(testCases--) {
        string ticket;
        cin >> ticket;
        
        int sumF = 0;
        int sumS = 0;

        for (int i = 0; i < 3; ++i) {
            sumF += ticket[i] - '0';
        }
        
        for (int i = 3; i < 6; ++i) {
            sumS += ticket[i] - '0';
        }
        
        if (sumF == sumS) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
