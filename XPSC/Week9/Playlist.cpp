#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    set<int> st;
    int ans = -1, start = 0;
    for (int i = 0; i < n; i++)
    {

        while (st.count(v[i]))
        {
            st.erase(v[start]);
            start++;
        }
        st.insert(v[i]);
        ans = max(ans, int(st.size()));
    }
    
    cout << ans << endl;

    return 0;
}