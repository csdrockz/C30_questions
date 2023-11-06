#include<stdio.h>
void main(){
    char id[10];
    int workingHours;
    float salaryPerHour;
    printf("enter id:");
    scanf("%s",&id);
    printf("enter working hours:");
    scanf("%d\n",&workingHours);
    printf("enter salary per hour:");
    scanf("%f\n",&salaryPerHour);
    printf("Employee Id =%s\n",id);
    printf("US$ %.2f",workingHours*salaryPerHour);
}