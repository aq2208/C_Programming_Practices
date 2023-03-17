#include <stdio.h>
int main(){
    
   int a, b, c, d, max;
   printf("\nNhap so nguyen a = "); scanf("%d",&a);
   printf("\nNhap so nguyen b = "); scanf("%d",&b);
   printf("\nNhap so nguyen c = "); scanf("%d",&c);
   printf("\nNhap so nguyen d = "); scanf("%d",&d);

   if (a==b) {
       if (a==c) {
           if(a==d) {
               printf("\nKhong co so lon nhat");
           }
       }
   }
   max = a;
   if (max < b) {max =b;}
   if (max <c) {max = c;}
   if (max <d) {max = d;}

   printf("\nSo lon nhat trong 4 so la : %d", max);




    

}