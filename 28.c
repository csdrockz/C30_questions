#include<stdio.h>
int main()
{
    int n,i,count=1,sum=0;
    printf("Enter the number to check whether it is perfect number:");
    scanf("%d",&n);
    int factors[n];
    factors[0]=1;
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            factors[count]=i;
            count++;
        }
    }
    for(i=0;i<count;i++){
        sum+=factors[i];
    }
    printf("The divisors are:");
    for(i=0;i<count;i++){
        printf("%d ",factors[i]);
    }
    if(sum==n){
        printf("\nThe sum is %d",sum);
        printf("\nSo, it is a perfect number");
    }
    else{
        printf("\nThe sum is %d",sum);
        printf("\nSo, it is not a perfect number");
    }
    return 0;
}