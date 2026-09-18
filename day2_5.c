//printf and scanf return type
#include<stdio.h>
int main(){

    int count = printf("hello!\n");
    printf("count = %d\n",count);// 7
    int num1 = 25;
    count =  printf("num1 = %d\n",num1); //10 
    printf("count = %d\n",count);

    int num2, num3, num4;
    printf("Enter the values of num2,num3,num4\n");
    count = scanf("%d%d%d",&num2,&num3,&num4); 
    printf("count = %d\n",count);// 3 


    return 0;

}