#include<stdio.h>
#include<string.h>
void main(){
    char a[3];
    char rev[3];
    printf("enter chars:");
    scanf("%s",&a);
    printf("%s \n",a);
    int length=strlen(a);
    printf("%d\n",length);
    int j=length-1;
    for(int i=0;i<length;i++){
        rev[j]=a[i];
        if(j!=0){
            j--;
        }
    }
    rev[length]='\0';
    
   for(int i=0;i<strlen(rev);i++){
    printf("%c",rev[i]);
   }
}