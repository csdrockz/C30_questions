#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Input the first number:");
    scanf("%d",&n1);
    printf("Input the second number:");
    scanf("%d",&n2);
    if(n2%n1==0){
        printf("Factor!");
    }
    else{
        printf("Not a Factor");
    }
    return 0;
}