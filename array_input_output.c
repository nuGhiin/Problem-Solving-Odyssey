#include <stdio.h>
int main(){

    int arr[5];
    // arr[0]=100;
    // arr[1]=255;
    // arr[2]=555;
    // arr[3]=455;

    for(int i=0; i<5; i++){
        // printf("arr[%d]\n", i); for printing array
        scanf("%d", &arr[i]);
    }

     for(int i=0; i<5; i++){
         printf("%d\n", arr[i]); 
        
    }





return 0;
}