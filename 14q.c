#include<stdio.h>
int main()
{
    int age;
    printf("Kindly enter your age:");
    scanf("%d",&age);
    if(age<=0){
        printf("Enter valid age please");
    }
    else{
        (age>18)?printf("Congratulation! You are eligible for casting your vote."):printf("OOPS! you are not eligible");
    }
    return 0;
}