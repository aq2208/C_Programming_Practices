/*
* * * * *
  * * * * 
    * * *
      * * 
        *
*/
#include <stdio.h>

int main(){
    int n;
    printf("\nNhap vao chieu cao:");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<i; j++){
            printf("  ");
        }
        for(int k=n-i+1; k>0; k--){
            printf("* ");
        }
        printf("\n");
    }
}