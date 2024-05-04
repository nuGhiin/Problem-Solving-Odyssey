#include <bits/stdc++.h>
using namespace std;
int main(){

    int t; cin>>t;
    while(t--){
        long long int n;
        cin >> n;
        priority_queue<long long int> pq;
        long long int res = 0;
        for (int i = 0; i < n; i++)
        {
            long long int z;
            cin >> z;
            if (z != 0)
            {
                pq.push(z);
            }
            else
            {
                if (!pq.empty())
                {
                    res += pq.top();
                    pq.pop();
                }
            }
        }
        cout << res << endl;
    }

return 0;
}