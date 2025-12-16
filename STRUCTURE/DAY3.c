#include<stdio.h>
#include<string.h>
int main(){
    struct book
    {
        char name[25];
        int page;
        int price;

    }a,b,c;
    strcpy(a.name,"adiya");
    printf("%s",a.name);
    
    return 0;
}