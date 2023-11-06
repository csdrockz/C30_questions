#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number of sequence required:");
    scanf("%d",&n);
    float sum=0.0;
    for(i=1;i<=n;i++){
        sum+=1.0/i;
    }
    for(i=1;i<=n;i++){
        if(i==n){
            printf("1/%d=%f",i,sum);
            continue;
        }
        printf("1/%d+",i);
    }
    printf("\nSum of series upto %d terms:%f",n,sum);
    return 0;
}