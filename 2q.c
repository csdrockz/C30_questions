#include<stdio.h>
void main(){
    int numberOfDays=1329;
    int years=numberOfDays/365;
    int weeks=(numberOfDays%365)/7;
    printf("%d\n",weeks);
    printf("%d\n",years);
    int daysLeft=(years*365)+(weeks*7);
    printf("%d\n",numberOfDays-daysLeft);
}