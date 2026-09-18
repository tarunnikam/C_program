#include<stdio.h>
int main(){
    int num1 = 25;
    char ch = 'A';
    float fvar = 1.2;
    double dvar = 3.5;

    printf("size of num1 = %u\n",sizeof(num1));
    printf("size of int = %u\n",sizeof(int)); 
    printf("size of ch = %u\n",sizeof(ch));
    printf("size of fvar = %u\n",sizeof(fvar));
    printf("size of dvar = %u\n",sizeof(dvar));
    printf("size of 'A' = %u\n",sizeof('A'));
    printf("size of 1.2 = %u\n",sizeof(1.2f));
    printf("size of num1 + dvar = %u\n",sizeof(num1+dvar));
 
    return 0;

}