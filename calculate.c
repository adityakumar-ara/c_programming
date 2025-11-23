///calculate simple enterest
#include<stdio.h>
int main(){
    float principle,rate,time,interest;
    printf("enter principle amount:");
    scanf("%f",&principle);
    printf("enter rate of interest (per years):");
    scanf("%f",&rate);
    printf("enter time of interst:");
    scanf("%f",&time);
    interest=(principle*rate*time)/100;
    printf("interest is :%f \n",interest);
}