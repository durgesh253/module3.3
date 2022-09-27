#define n 5
#include<stdio.h>
struct employee
{
    int empno;
    char empname[100];
    char add[100];
    int age;
}e[n];

void main(){
    for (int i = 0; i < n; i++)
    {
        printf("employe no:");
        scanf("%d",&e[i].empno);
        printf("employee name:");
        scanf("%s",&e[i].empname);
        printf("employee adress:");
        scanf("%s",&e[i].add);
        printf("employee age:");
        scanf("%d",&e[i].age);
    }
    for (int i = 0; i < n; i++)
    {
       printf("\nnumber:%d",e[i].empno);
       printf("\nname:%s",e[i].empname);
       printf("\naddress:%s",e[i].add);
       printf("\nage:%d",e[i].age);
    }
    


}
