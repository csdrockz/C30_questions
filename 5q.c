#include<stdio.h>
int main()
{
    int distance;
    float litres;
    printf("Enter the distance travelled(in km):");
    scanf("%d",&distance);
    printf("enter the fuel spent(in lt):");
    scanf("%f",&litres);
    printf("Average consumption (km/lt) %.3f",distance/litres);
    return 0;
}