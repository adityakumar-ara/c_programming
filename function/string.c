#include <stdio.h>
#include <string.h>

// // int main(){
// //     char a[]="aditya";
// //     char b[]="kumar";
// //     printf(strcat(a,b));
// // return 0;
// // }
int main()
{
    char a[] = "aditya";
    char b[] = "kumar";
    //     // printf(strcat(a,b));
    //     printf("stringcmp is %d",strcmp(a,b));
    char c[50];
    //     // char b[]="kumar";
    printf(strcat(a, b));
    //     // // int total_len=strlen(a)+strlen(b);
    //     // // printf("the lenght is%d",total_len);
    strcpy(c, strcat(a, b));
    //     // printf("reverce is %c",strrev(a));

    return 0;
}