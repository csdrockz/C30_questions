#include<stdio.h>
int main()
{
    int n1,n2;
    char input[100];
    char temp;
    printf("Enter the string here:");
    scanf("%s",input);
    printf("Enter the indices to be changed:");
    scanf("%d %d",&n1,&n2);
    temp=input[n1];
    input[n1]=input[n2];
    input[2]=temp;
    printf("%s",input);
    return 0;
}