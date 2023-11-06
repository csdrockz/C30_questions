#include<stdio.h>
int main()
{
    int n,sum=0,temp;
    printf("Enter a three digit amstrong number:");
    scanf("%d",&n);
    int arm=n;
    while(arm>0){
        if(arm>99){
            temp=(int)arm/100;
            sum+=(temp*temp*temp);
            arm=arm%100;
        }
        else if(arm>9 && arm<=99){
            temp=(int)arm/10;
            sum+=(temp*temp*temp);
            arm=arm%10;
        }
        else if(arm>0 && arm<=9){
            temp=arm;
            sum+=(temp*temp*temp);
            arm=arm/10;

        }
    }
    if(sum==n){
        printf("%d is armstrong number.",n);
    }
    else{
        printf("%d is not a armstrong number",n);
    }
    return 0;
}