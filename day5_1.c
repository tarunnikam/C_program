// Bitwise Operator:  &  | ^  ~
#include<stdio.h>
int main(){

    int num1 = 25;
    int num2 = 50;

    printf("num1 & num2 = %d\n", num1 & num2);//16
    printf("num1 | num2 = %d\n", num1 | num2);//59
    printf("num1 ^ num2 = %d\n", num1 ^ num2);//43
    printf("num1 ~ = %d\n",~num1 );//-26

    return 0;
}