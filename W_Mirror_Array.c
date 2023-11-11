#include <stdio.h>
int main(){

    int n, m;// row col
    scanf("%d %d", &n, &m);
    int a[n][m]; // m sizer n ta array-2D

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &a[i][j]);
        }
    }

     for(int i=0; i<n; i++){
        for(int j=m-1; j>=0; j--){// loop ulta chalailei uttor ashibe
            printf("%d ", a[i][j]); 
        }
        printf("\n");
    }



return 0;
}