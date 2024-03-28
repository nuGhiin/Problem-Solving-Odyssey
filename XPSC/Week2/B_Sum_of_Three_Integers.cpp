// #include <bits/stdc++.h>
// using namespace std;
// int main(){

//     int k, s;
//     cin>>k>>s;
//     int cnt=0;
//     for(int i=0; i<=k; i++){
//         for(int j=0; j<=k; j++){
//             for(int h=0; h<=k; h++){
//                 if(i+j+h==s){
//                     cnt++;
//                 }
//             }
//         }
//     }
//     cout<<cnt<<endl;

// return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int k, s;
    cin >> k >> s;
    int cnt = 0;

    for (int i = 0; i <= k; i++) {
        for (int j = 0; j <= k; j++) {
            int h = s - i - j;
            if (h >= 0 && h <= k) {
                cnt++;
            }
        }
    }

    cout << cnt << '\n';

return 0;
}

