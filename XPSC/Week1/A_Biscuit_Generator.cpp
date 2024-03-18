#include <bits/stdc++.h>
using namespace std;
int main(){

    int A, B, T;
    cin >> A >> B >> T;

    int bis = 0;
    for (int i = A; i <= T; i += A) {
        bis += B;
    }

    cout << bis << endl;

return 0;
}



