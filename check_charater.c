#include<stdio.h>
int main()
{
    char alphabet;
    printf("enter alphabet:");
    scanf("%c",&alphabet);

    if(alphabet>='A' && alphabet <='Z'){
       printf("this is uppercase alphabet %c",alphabet);
    }
    else if (alphabet>='a' && alphabet<='z')
    {
        printf("this is lowercase alphabet %c",alphabet);
    }
    else 
      printf("not alphabet");    
}