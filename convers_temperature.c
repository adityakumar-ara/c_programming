#include<stdio.h>
int main(){
    float celsius,fahrenheit;
    int choise;
    printf("enter 1 convert celsius to fahrenheit:");
    printf("enter 2 convert fshrenheit to celsius");
    scanf("%d",&choise);
    if(choise==1)
    {
        printf("enter tempureture in celsius");
        scanf("%f",&celsius);
        fahrenheit=(celsius*9/5)+32;
        
    }
}