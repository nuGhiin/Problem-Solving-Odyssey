#include <stdio.h>


void digit(int n){
    if(n==0) return; //base case
    int x= n%10;
    digit(n/10);
    printf("%d ", x);
}

int main(){

    
    int test;
    scanf("%d", &test);
    for(int t=0; t<test; t++ ){
        int n;
    scanf("%d", &n);

    if(n==0){ // to handle 1 input
        printf("0");
    }
    digit(n);
    printf("\n");
    }
    

return 0;
}