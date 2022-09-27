#define row 3
#define col 3
#include<stdio.h>
void main(){
    int a[3][3]={{3,3,3},{2,2,2},{5,5,5}};
    int b[3][3]={{5,4,4},{6,6,6},{4,6,2}};

    sum(a,b);
    sub(a,b);
    mul(a,b);

}
void sum(int a[3][3],int b[3][3]){
    int c[3][3];
printf("\naddition___\n");

for (int i = 0; i < row; i++)
{
    for (int j = 0; j < col; j++)
    {
       c[i][j]=a[i][j]+b[i][j];
       printf("%d\t",c[i][j]);
    }
    printf("\n");
    
}
}
void sub(int a[3][3],int b[3][3]){
    int c[3][3];
printf("\nsubtraction___\n");

for (int i = 0; i < row; i++)
{
    for (int j = 0; j < col; j++)
    {
        c[i][j]=a[i][j]-b[i][j];
       printf("%d\t",c[i][j]);
    }
    printf("\n");
    }
}
void mul(int a[3][3],int b[3][3]){
    int c[3][3];
printf("\nmultipication___\n");

for (int i = 0; i < row; i++)
{
    for (int j = 0; j < col; j++)
    {
       c[i][j]=a[i][j]*b[i][j];
       printf("%d\t",c[i][j]);
    }
    printf("\n");
    
}
}