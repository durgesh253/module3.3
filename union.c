/*Union is a user define data type (very similar to structures).

The difference between structures and union lies in the fact that in structure , 
each member has its own  storage  location.whereas members of a union user a single shared memory location.
The single shared memory location is equal to the size of its largest data member.
*/


#define n 2
#include<stdio.h>
union employe{
    int  age, name;
    char empname[100],address[100];
}e;

void main(){
    for (int  i = 0; i < n; i++)
    {
        
      printf("enter empoloye name:");
      scanf("%s",&e.empname);
      printf("enter age:");
      scanf("%d",&e.age);
      printf("enter address:");
      scanf("%s",&e.address);

    }
    for (int i = 0; i < n; i++)
    {
    
        printf("name:%s",e.empname);
        printf("age:%d",e.age);
        printf("address:%s",e.address);
    }
    
    

}