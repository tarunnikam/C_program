//char and its ascii value
#include<stdio.h>
int main(){

    char ch1 = 'A',   ch2 = 'Z'; 
    char ch3 = 'a',   ch4 = 'z' ;
    char ch5 = '\n';

    printf("ASCII VALUE of A to Z = %d to %d\n",ch1,ch2);
    printf("ASCII VALUE of A to Z = %d to %d\n",'A','Z');
    printf("ASCII VALUE of a to z = %d to %d\n",ch3,ch4);
    printf("ASCII VALUE of 0 to 9 = %d to %d\n",'0','9');
    printf("ASCII VALUE of \\n is %d\n",'\n');

    return 0;
}