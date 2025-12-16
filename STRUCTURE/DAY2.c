// #include<stdio.h>
// #include <stdlib.h>
// struct student
// {
//     char name[30];
//     int roll_nu;
//     int roll_co;
//     int marks;
// };

// int main(){
//      struct student a={"aditya",250110411,766444,450};
//    //   printf("%s\t%d\t%d\t%d\t%d\t",a.name,a.age,a.roll_nu,a.roll_co,a.marks);
//    printf("name:%s\n",a.name);    
       
//    printf("name:%d\n",a.roll_nu);    
//    printf("name:%d\n",a.roll_co);    
//    printf("name:%d\n",a.marks);    
//     return 0;
// }


#include<stdio.h>
#include <stdlib.h>
#include <string.h>
struct result
{
    char name[30];
    int roll_n;
    int roll_c;
    int marks;
};
int main(){
    struct result a;
    printf("enyet yur name\n");
    fgets(a.name, sizeof(a.name), stdin);
    printf("enter your roll number:");
    scanf("%d\n",&a.roll_n);
    printf("enter your roll code:");
    printf("%d\n",&a.roll_c);
    printf("enter your marks:");
    printf("%d\n",&a.marks);
    printf("-------student details--------\n");
    printf("%s\n",a.name);
    printf("%d\n",a.roll_n);
    printf("%d\n",a.roll_c);
    printf("%d\n",a.marks);
     
}
