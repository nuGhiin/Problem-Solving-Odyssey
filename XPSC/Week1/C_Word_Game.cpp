#include <bits/stdc++.h>
using namespace std;
int main(){

    int t; 
    cin>>t;
    while(t--){
        int n; cin>>n;
        vector<string> words[3];
        map<string, int> freq;
        
        for(int i=0; i<3; i++){
            for(int j=0; j<n; j++){
                string a; 
                cin>>a;
                words[i].push_back(a);
                freq[words[i][j]]++;
            }
        }

        int scr[3]={0};
        for(int i=0; i<3; i++){
            for(int j=0; j<n; j++){
                if(freq[words[i][j]]==1){
                    scr[i]+=3;
                }
                else if(freq[words[i][j]]==2){
                    scr[i]+=1;
                }
            }
        }
        cout<<scr[0]<<" "<<scr[1]<<" "<<scr[2]<<endl;


        //for(int i=0; i<n; i++){
         //   int scr=0;
          //  for(int j = 0; j < words[i].size(); j++){
                
                // if((words[(i+1)%3]) && (words[(i+2)%3])){
                //     continue;
                // }
                // if((words[(i+1)%3]) || (words[(i+2)%3])){
                //     scr++;
                // }
                // else{
                //     scr+=3;
        //         // }
        //         if (find(words[(i + 1) % 3].begin(), words[(i + 1) % 3].end(), words[i][j]) != words[(i + 1) % 3].end() ||
        //     find(words[(i + 2) % 3].begin(), words[(i + 2) % 3].end(), words[i][j]) != words[(i + 2) % 3].end()) {
        //     scr++;
        // } else {
        //     scr += 3;
        // }
        //    }
        //     cout<<scr<<" ";
        //}





    //   for (int i = 0; i < words[3].size(); i++) {
    //      cout << words[3][i] << " ";
    //  }
    //  for(int i = 0; i < 3; i++) {
    //     for (int j = 0; j < words[i].size(); j++) {
    //         cout << words[i][j] << " ";
    //     }
    // }


        //string ar[n][3];
        // for(int i=0; i<n; i++){
        //     for(int j=0; j<3; j++){
        //         cin>>ar[i][j];
        //     }
        // }
        // for(int i=0; i<n; i++){
        //     for(int j=0; j<3; j++){
        //         cout<<ar[i][j]<<" ";cout<<endl;
        //     }
        // }

        
       
    }
    

return 0;
}