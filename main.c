#include <stdio.h>
int main()
    {/*
    //basic printing
    int x =12;
    float y = 12.2;
    char a = 'd';
    printf("%d\n",x);
    printf("%.2f\n",y);
    printf("%c\n",a);
    int marks1,marks2;
    printf("ENTER A NUMBER:");
    scanf("%d",&marks1);
    printf("ENTER A NUMBER:");
    scanf("%d",&marks2);
    printf("MARKS ARE : %d , %d",marks1,marks2);
    int num1;
    float num2;
    float sum;
    printf("Enter first number :");
    scanf("%d",&num1);
    printf("Enter second number :");
    scanf("%f",&num2);
    sum = num1+num2;
    printf("Sum of %d and %f is %.3f",num1,num2,sum);*/

    float num1;
    float num2;
    float choice;
    printf("Enter any Two Numbers : \n");
    scanf ("%f %f",&num1,&num2);
    printf("Enter the Operation you want to perform\n");
    printf("Press 1 for Addition :\n");
    printf("Press 2 for multiplication :\n");
    printf("Press 3 for Subtraction :\n");
    printf("Press 4 for Division :\n");
    scanf ("%f",&choice);
    if(choice==1){
        float sum =num1+num2;
        printf("The Sum of %.2f and %.2f is : %.2f",num1,num2,sum);
    }
    else if(choice==2){
            float multiplication =num1*num2;
            printf("The Multiplication of %.2f and %.2f is : %.2f",num1,num2,multiplication);
    }
    else if(choice==3){
        float subtraction =num1-num2;
        printf("The subtraction of %.2f and %.2f is : %.2f",num1,num2,subtraction);
    }
    else if(choice==4){
        float division =num1/num2;
        printf("The Division of %.2f and %.2f is : %.2f",num1,num2,division);
    }
    else {
        printf("You have Selected the Wrong Operation");
    };


    return 0;
}
