#include <bits/stdc++.h>
using namespace std;
int main(){

    int t; cin>>t;
    while(t--){
        long long n;
        cin >> n;
        string s;
        cin >> s;

        vector<long long> v;
        long long sum = 0;
        for (long long i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                sum += i;
                v.push_back((n - i - 1) - i);
            }
            else
            {
                sum += (n - i - 1);
                v.push_back(i - (n - i - 1));
            }
        }
        sort(v.rbegin(), v.rend());
        for (long long i = 0; i < n; i++)
        {
            if (v[i] > 0)
            {
                sum += v[i];
            }
            cout << sum << " ";
        }
        cout << endl;
    }

return 0;
}