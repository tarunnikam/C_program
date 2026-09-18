// Short hand operators: +=  -=  *=  /=   %=
//binary operator.
#include<stdio.h>
int main(){

    int num1 = 40;
    int num2 = 20;

    printf("before operation : num1 = %d num2 = %d\n", num1, num2);
    num1 += num2;

    printf("after operation : num1 = %d num2 = %d\n", num1, num2);


    num1 -= num2;
    printf("num1 = %d num2 = %d\n", num1, num2);


    num1 *= num2;
    printf("num1 = %d num2 = %d\n", num1, num2);

    num1 /= num2;
    printf("num1 = %d num2 = %d\n", num1, num2);

    num1 %= num2;
    printf("num1 = %d num2 = %d\n", num1, num2);


    //these are not short hand operator.

    num1 = 20 , num2 = 10;
    num1 =+ num2;
    printf("num1 = %d num2 = %d\n", num1, num2);

     num1 =- num2;
    printf("num1 = %d num2 = %d\n", num1, num2);

 return 0;

}