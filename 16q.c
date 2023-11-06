#include<stdio.h>
int main()
{
    char roll[50],name[100];
    int phy,chem,mat;
    float per;
    printf("Enter your roll number:");
    scanf("%s",roll);
    printf("Enter the name of the student:");
    scanf("%s",name);
    printf("Enter your marks maths,physics,chemistry:");
    scanf("%d %d %d",&mat,&phy,&chem);
    printf("Roll No:%s\n",roll);
    printf("Name of the student:%s\n",name);
    printf("Marks in physiscs:%d\n",phy);
    printf("Marks in chemistry:%d\n",chem);
    printf("Marks in Maths:%d\n",mat);
    printf("Total marks:%d\n",(mat+phy+chem));
    per=((float)(mat+phy+chem)/300)*100;
    printf("Percentage:%.2f \n",per);
    if(per>=75.0){
        printf("Division:First\n");
    }
    else if(per<75.0 && per>=65.0){
        printf("Division:Second\n");
    }
    else if(per>=40.0){
        printf("You passed out!\n");
    }
    else{
        printf("Fail!:(\n");
    }
    return 0;
}