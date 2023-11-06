#include<stdio.h>
int main()
{
    int n1,n2;
    int choice;
    printf("Enter num1:");
    scanf("%d",&n1);
    printf("Enter num2:");
    scanf("%d",&n2);
    printf("Enter your chocie:");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:{
        printf("Addition\n");
        printf("The addition of %d and %d is %d",n1,n2,(n1+n2));
        break;
    }
    case 2 :
    {
        printf("Subtraction\n");
        printf("The subtraction of %d and %d is %d",n1,n2,(n1-n2));
        break;
    }
    case 3:
    {
        printf("Multiplication\n");
        printf("The Multiplication of %d sand %d is %d",n1,n2,(n1*n2));
        break;
    }
    case 4:
    {
        printf("Division\n");
        printf("The Division of %d and %d is %.3f",n1,n2,((float)n1/n2));
        break;
    }
    default:
        break;
    }
    return 0;
}