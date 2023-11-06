#include<stdio.h>
int main()
{
    int maths,physics,chem;
    printf("Enter marks in Maths:");
    scanf("%d",&maths);
    printf("Enter marks in physics:");
    scanf("%d",&physics);
    printf("Enter marks in chemistry:");
    scanf("%d",&chem);
    if(maths>=65 && physics>=55 && chem>=50 && (maths+physics+chem)>=190 || (maths+physics)>=190){
            printf("candidate is eligible");
    }
    else{
        printf("the candidate is not eligible");
    }
    return 0;
}