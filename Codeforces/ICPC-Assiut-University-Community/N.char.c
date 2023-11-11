#include <stdio.h>
int main(){

    char c;
    scanf("%c", &c);
    
    if(c>=97  && c<=122){
        int ans=c-32;
        printf("%c", ans);
    }
    else if(c>=64  || c<=96){
        int ans=c+32;
        printf("%c", ans);
    }
    
    

return 0;
}