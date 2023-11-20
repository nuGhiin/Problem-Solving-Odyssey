#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[3];
    int flag = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[j];
            //cout << a[j] << " ";
        }

        if ((a[0] == 1 && a[1] == 1) || (a[0] == 1 && a[2] == 1) || (a[1] == 1 && a[2] == 1)) {
            flag++;
        }

        cout << endl;
    }
    cout << flag << endl;

    return 0;
}
