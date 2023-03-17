#include <stdio.h>
int main(){
    char dapan;
    printf("\nCon cho di bang may chan ?");
    printf("\nA. 1 chan \nB. 2 chan \nC. 3 chan \nD. 4 chan");
    printf("\nNhap dap an cua ban : ");
    scanf("%c", &dapan);

    switch (dapan) 
    {
    case 'A':
    case 'a':
    case 'B':
    case 'b':
    case 'C':
    case 'c':
        printf("\nDap an sai ");
        break;
    case 'D':
    case 'd':
        printf("\nDap an dung ");
        break;
    
    default:
        printf("\nDap an khong hop le");
        break;
    }
    
}
   