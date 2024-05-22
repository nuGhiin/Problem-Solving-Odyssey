/*p: https://www.codechef.com/START135D/problems/INVEQ*/

#include <bits/stdc++.h>
using namespace std;
int main(){

     int T;
    cin >> T;
    
    while (T--) {
        int N;
        string S;
        cin >> N >> S;
        
        int count_0_segments = 0, count_1_segments = 0;
        
        char current_char = S[0];
        if (current_char == '0') {
            count_0_segments++;
        } else {
            count_1_segments++;
        }
        
        for (int i = 1; i < N; i++) {
            if (S[i] != current_char) {
                current_char = S[i];
                if (current_char == '0') {
                    count_0_segments++;
                } else {
                    count_1_segments++;
                }
            }
        }
        
        cout << min(count_0_segments, count_1_segments) << "\n";
    }
    

return 0;
}