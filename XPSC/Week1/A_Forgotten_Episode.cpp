/*#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<long long> ep;
    
    for (long long i = 2; i <= n; i++) {
        int num;
        cin >> num;
        ep.push_back(num);
    }

    sort(ep.begin(), ep.end());

    int unwatched = 0;
    for (long long i = 2; i < ep.size(); i++) {
        if (ep[i] != i + 1) {
            unwatched = i + 1;
            break;
        }

    }
    cout << unwatched << endl;

    return 0;
}*/



#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<long long> ep(n);


    for (long long i = 0; i < n - 1; i++) {
        int num;
        cin >> num;
        ep[num - 1] = 1; 
    }

   
    int unwatched = 0;
    for (long long i = 0; i < n; i++) {
        if (ep[i] == 0) { 
            unwatched = i + 1; 
            break;
        }
    }

    cout << unwatched << endl;

    return 0;
}
