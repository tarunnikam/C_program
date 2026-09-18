 //escape sequence: \n,\t,\r,\b,%%,\"",\'',\\n
#include<stdio.h>
int main(){
    
    printf("hello\neveryone\n");
    printf("good morning\r\n");
    printf("subject\tmarks\n");
    printf("im working on day2_1.c\b\b\b1\n");
    printf("\'how are you!\"\n");
    printf("\'how are you\'\n");
    printf("i have scored 90%%\n");
    printf("\\n is a new line escape sequence\n");

    return 0;

}