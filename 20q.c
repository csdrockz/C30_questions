#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number of terms:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        printf("Number is %d and cube of the %d :%d\n",i,i,i*i*i);
    }
    return 0;
}