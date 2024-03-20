#include <bits/stdc++.h>
using namespace std;
int main(){

    int t; 
    cin>>t;
    while(t--){
        int n;
        char c;
        string s;
        cin >> n >> c;
        cin>>s;

        if (c == 'g')
        {
            cout << 0 << endl;
            continue;
        }

        s += s;
        int count = 0;
        int ans = 0;
        int len = n * 2;
        for (int i = 0; i < len; i++)
        {
            if (s[i] == c)
            {
                count = 0;
                while (s[i] != 'g' && i < len)
                {
                    count++;
                    i++;
                }
                if (count > ans)
                {
                    ans = count;
                }
            }
        }

        cout << ans << endl;
    }

return 0;
}