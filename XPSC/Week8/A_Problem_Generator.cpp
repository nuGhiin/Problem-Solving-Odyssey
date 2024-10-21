#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<tuple<int, int, string>> test_cases;
    for (int i = 0; i < t; ++i) {
        int n, m;
        string a;
        cin >> n >> m >> a;
        test_cases.push_back(make_tuple(n, m, a));
    }

    for (auto c: test_cases) {
        int n, m;
        string a;
        tie(n, m, a) = c;

        map<char, int> count;
        for (char c = 'A'; c <= 'G'; ++c) {
            count[c] = 0;
        }
        for (char char_a : a) {
            if (count.find(char_a) != count.end()) {
                count[char_a] += 1;
            }
        }

        int prb = 0;
        for (char c = 'A'; c <= 'G'; ++c) {
            if (count[c] < m) {
                prb += (m - count[c]);
            }
        }

        cout << prb << endl;
    }

    return 0;
}
