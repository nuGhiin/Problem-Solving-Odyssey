#include <iostream>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;
        int scr = 0;
        if (x == 1) {
            scr = 6;
        } else if (x % 2 == 0) {
            scr = (x / 2) * 12 + (x / 2);
        } else {
            scr = ((x - 1) / 2) * 12 + ((x - 1) / 2) + 6;
        }
        cout << scr << endl;
    }
    return 0;
}
