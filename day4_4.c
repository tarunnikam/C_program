

#include<stdio.h>
int main(){

    int num1 = 25;
    int num2 = 50;
    int result = ++num1;

    printf("result = %d num1 = %d\n", result, num1);

    result = num2++;
    printf("result = %d num2 = %d\n", result, num2);


    result = --num1;
    printf("result = %d num1 = %d\n", result, num1);


    result = num2--;
    printf("result = %d num2 = %d\n", result, num2);

    return 0;

}