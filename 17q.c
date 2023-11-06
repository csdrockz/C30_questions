#include<stdio.h>
void check(char input){
    int i;
    char low[]="abcdefghijklmnopqrstuvwxyz";    
    low[27]='\0';
    char up[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    up[27]='\0';
    char spec[] = "(){}[];,->:?&*.#@_";
    char nums[]="1234567890";
    nums[11];
    for(i=0;i<26;i++){
        if(input==low[i])
            printf("This is lower alphabet");
        if(input==up[i])
            printf("This is upper alphabet");
        if(input==spec[i])
            printf("This is special charecter");
    }
    for(i=0;i<10;i++){
        if(input==nums[i])
        printf("This is a number");
    }
}
int main()
{
    char input;
    printf("Enter charecter:");
    scanf(" %c",&input);
    check(input);
    return 0;
}