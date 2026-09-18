//signed unsigned variables(Type modifiers)
#include<stdio.h>
#include<limits.h>
int main(){
    signed int num1 = 10;
    // It can accept both positive and negative numbers
    // signed is a keyword (optional)
    // By default all variables are signed

    unsigned int num2 = 20;
    //it accept only positive number

    printf("signed int range is %d to %d\n",INT_MIN,INT_MAX);
    return 0;

}