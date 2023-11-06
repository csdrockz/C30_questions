#include<stdio.h>
int main()
{
    int number;
    printf("Enter the number :");
    scanf("%d",&number);
    if(number==0){
        printf("neutral");
    }
    else{
        (number>0)?printf("%d is Positive:)",number):printf("%d is Negative:(",number);
    }
    return 0;
}