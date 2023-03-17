/*
      *
    * * *
  * * * * *
* * * * * * * 
*/
#include <stdio.h>
int main(){
    int n;
    int x=0;
    printf("\nNhap vao chieu cao: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            printf("  ");
        }
        for( int k=1; k<=i+x ;k++ ){
            printf("* ");
        }
        x++;
        printf("\n");
    }
}