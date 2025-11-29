#include <stdio.h>
void printnum(int num)
{
    printf("%d\n",num);
    if (num == 1)
    {
      
        return;
    }

     
    printnum(num - 1);
    
}


    int main()
{     int num; 
     printf("enter your numbr:");
    scanf("%d",&num);
    printnum(num);
    return 0;
}