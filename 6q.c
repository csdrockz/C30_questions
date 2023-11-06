#include<stdio.h>
void main(){
    int amount,count=0;
    int h_notes=0;
    int f_notes=0,tw_notes=0,t_notes=0,fi_notes=0,two=0,one=0;
    printf(" Enter the amount:");
    scanf("%d",&amount);
    int remain_amount=amount;
    while (remain_amount!=0)
    {
       if(remain_amount>=100){
        h_notes=remain_amount/100;
        remain_amount=remain_amount%100;
       }
       else if(remain_amount>=50 && remain_amount<100){
            f_notes=remain_amount/50;
            remain_amount=remain_amount%50;
       }
       else if(remain_amount>=20 && remain_amount<50){
        tw_notes=remain_amount/20;
        remain_amount=remain_amount%20;
       }
       else if(remain_amount>=10 && remain_amount<20){
        t_notes=remain_amount/10;
        remain_amount=remain_amount%10;
       }
       else if(remain_amount>=5 && remain_amount<10){
        fi_notes=remain_amount/5;
        break;
       }
       else if(remain_amount>=2 && remain_amount<5){
            two=remain_amount/2;
            remain_amount=remain_amount%2;
       }
       else if(remain_amount>=1 && remain_amount<2){
            one=remain_amount/1;
            remain_amount=0;
       }
       else{
        printf("Something Wrong:(");
        break;
       }
    }
    
    printf(" hundred notes:%d\n fifty notes:%d\n twenty notes:%d\n ten notes:%d\n five notes:%d\n two coins:%d\n one coin:%d\n",h_notes,f_notes,tw_notes,t_notes,fi_notes,two,one);
}