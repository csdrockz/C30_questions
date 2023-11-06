#include<stdio.h>
int main()
{
    int a[5];
    int i;
    int sum=0;
    for(i=0;i<5;i++){
        printf("Input the number %d:",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
        if(a[i]%2!=0){
            sum+=a[i];
        }
    }
    printf("Sum of all odd values:%d",sum);
    return 0;
}