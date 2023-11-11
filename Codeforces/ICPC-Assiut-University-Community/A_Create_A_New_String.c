#include <stdio.h>
#include <string.h>
int main(){

    char S[1000];
    char T[1000];
    scanf("%s %s", &S, &T);
    
    int lenS, lenT;
    lenS= strlen(S);
    lenT= strlen(T);

    printf("%d %d\n", lenS, lenT);
    printf("%s %s", S, T);



return 0;
}