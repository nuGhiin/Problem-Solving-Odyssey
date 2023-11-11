#include <stdio.h>
int main(){

    char c;
    scanf("%c", &c);
    if(c>=48 && c<=57){
        printf("IS DIGIT");
    }
    else if(c>=64 && c<=96){
        printf("ALPHA\nIS CAPITAL");
    }
    else if(c>=97 && c<=122){
        printf("ALPHA\nIS SMALL");
    }
    

return 0;
}