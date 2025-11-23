#include<stdio.h>
void day_calender(){
    int day;
    printf("enter your number bitween 1 to 7:");
    scanf("%d",&day);
    switch(day)
    {
    case 1: printf("sunday \n");
    break;
    case 2: printf("monday\n");
        break;
    case 3: printf("tuesday\n");
        break;
   case 4: printf("wednesday\n");
        break;
    case 5: printf("thursady\n");
        break;
       
    case 6:printf("friday\n");
        break;
    case 7: printf("saturday\n ");
        break;    
    default:
          printf("plz enter number bitween  1 to 7\n");
        break;
    }
}
void month_calender(){
int month;
    printf("enter your number bitween 1 to 12:");
    scanf("%d",&month);
    switch(month)
    {
    case 1: printf("january\n");
    break;
    case 2: printf("february\n");
        break;
    case 3: printf("march\n");
        break;
   case 4: printf("april\n");
        break;
    case 5: printf("may\n");
        break;
       
    case 6:printf("june\n");
        break;
    case 7: printf("july\n");
        break;  
    case 8: printf("august\n");
    break;
    case 9: printf("september\n");
        break;
    case 10: printf("octomber\n");
        break;
   case 11: printf("november\n");
        break;
    case 12: printf("december\n");
        break;
             
    default:
          printf("plz enter number bitween  1 to 12\n");
        break;
    }
}
int main(){
     day_calender(); //coling function
     month_calender();
    return 0;
}