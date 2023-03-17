#include <stdio.h>
int main(){
    int intType;
    float floatType;
    double doubleType;
    char charType;
    //Dung sizeof de tim duoc kich thuoc cua kieu du lieu la bao nhieu byte
    //Voi sizeof ta dung %zu hoac %lu
    printf("\nSize of int : %zu bytes", sizeof(intType));
    printf("\nSize of float : %zu bytes", sizeof(floatType));
    printf("\nSize of double : %zu bytes", sizeof(doubleType));
    printf("\nSize of char : %zu byte", sizeof(charType));
    //cac bien intType, floatType,... co the thay the bang a, b, c, d,... cho de hinh dung

}