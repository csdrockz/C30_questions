#include<stdio.h>

void main(){
    int n1,n2,n3;
    printf("Input the first integer:");
    scanf("%d",&n1);
    printf("Input the second integer:");
    scanf("%d",&n2);
    printf("Input thr third integer:");
    scanf("%d",&n3);
    (n1>n2)? ((n1>n3)?printf("Maximum of three:%d",n1):printf("Maximum of three:%d",n3)):((n2>n3)?printf("Maximum of three :%d",n2):printf("Maximum of three:%d,n3"));
}