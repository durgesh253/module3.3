#define n 2
#include<stdio.h>
struct employe
{
    int empno;
    char empname[100];
    char address[100];
    int age;
}e[n];

void main(){
    for (int i = 0; i < n; i++)
    {
         printf("\nemloye no:");
         scanf("%d",&e[i].empno);
         printf("\nemloye name:");
         scanf("%s",&e[i].empname);
         printf("\naddress:");
         scanf("%s",&e[i].address);
         printf("\nemloye age:");
         scanf("%d",&e[i].age);  
           } 
    for(int i=0 ;i < n; i++)
    {
        printf("\nemployee no:%d",e[i].empno);
        printf("\nemployee name:%s",e[i].empname);
        printf("\nemployee address:%s",e[i].address);
        printf("\nage:%d",e[i].age);
    }
    
    

}