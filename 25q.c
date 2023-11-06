#include<stdio.h>
int main()
{
    int i,j,k,count=1;
    for(i=0;i<4;i++){
        for(k=0;k<4-i;k++){
                printf(" ");
            }
        for(j=0;j<=i;j++){
            printf("%d ",count);
            count++;
        }
        printf("\n");
    }

    return 0;
}