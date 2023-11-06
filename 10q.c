#include<stdio.h>
int main()
{
    int month_number;
    char months[12][15]={"January","Febraury","March","April","May","June","July","August","Semptember","October","November","December"};
    printf("Input a number between 1 to 12 to get the month name:");
    scanf("%d",&month_number);
    printf("%s",months[month_number-1]);
    return 0;
}