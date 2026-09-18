// Switch Case
#include<stdio.h>
int main(){

    int num1, num2, choice;
    printf("enter the value of num1 and num2\n");
    scanf("%d %d", &num1,&num2);

    printf("1 Addition\n 2 Subtraction\n 3 Multiplication\n 4 Division\n");

    printf("enter the choice\n");
    scanf("%d", &choice);

    switch (choice){

        case 0+1 : 
            printf("Addition = %d\n",num1+num2);
            break;

         case 2 : 
            printf("Subtraction = %d\n",num1-num2);
            break;

        case 3 : 
            printf("Multiplication = %d\n",num1*num2);
            break;

        case 4 : 
            printf("Division = %d\n",num1/num2);
            break;
        default :
        printf("Invalid Choice\n");
    } 
    return 0;
}