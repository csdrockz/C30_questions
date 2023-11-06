#include<stdio.h>
long factorial(int n){
    if(n==0 || n==1)
        return 1;
    else
        return n*factorial(n-1);
}
int main()
{
    int a;
    printf("Enter the number to get the factorial:");
    scanf("%d",&a);
    printf("The factorial of %d is %ld",a,factorial(a));
    return 0;
}