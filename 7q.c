#include<stdio.h>
int main()
{
    int total_seconds;
    int hrs,mins,secs;
    printf("Enter the seconds in total:");
    scanf("%d",&total_seconds);
    int seconds_updated=total_seconds;
    while(seconds_updated>60){
        if(seconds_updated>=3600){
            hrs=seconds_updated/3600;
            seconds_updated=seconds_updated%3600;
        }
        else if(seconds_updated<3600 && seconds_updated>=60){
                mins=seconds_updated/60;
                seconds_updated=seconds_updated%60;
        }
    }
    secs=seconds_updated;
    printf("There are:\nH:M:S - %d:%d:%d",hrs,mins,secs);
    return 0;
}