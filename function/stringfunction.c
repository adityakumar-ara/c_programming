#include <stdio.h>
#include <string.h>
void strcats()
{
    char a[] = "aditya";
    char b[] = "kumar";
    printf(strcat(a, b));
    printf("\n");
}
void strrevs()
{
    char a[] = "aditya";
    printf(strrev(a));
    printf("\n");
}
void strcpys()
{
    char a[] = "aditya";
    char b[] = "kumar";
    char c[50];
    printf(strcat(a, b));
    strcpy(c, strcat(a, b));
    printf("\n");
}
void strcmps()
{
    char a[] = "aditya";
    char b[] = "kumar";
    char c[50];
    printf("stringcmp is %d",strcmp(a,b));
    printf("\n");
}
int main()
{
    strcats();
    strrevs();
    strcpys();
    strcmps();
    return 0;
}