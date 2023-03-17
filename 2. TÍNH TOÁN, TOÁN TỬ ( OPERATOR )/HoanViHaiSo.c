#include <stdio.h>
int main(){
    int a=4, b=5;
    int temp = a; //gan gia tri cua a cho temp 
    //bay gio temp = a = 4
    a = b; //gan gia tri cua b cho a  
    //bay gio a = b = 5
    b = temp; //gan temp cho b 
    //bay gio b = temp = 4 
    printf("\n a = %d\n b = %d", a, b);

    

}