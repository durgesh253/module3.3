#include <stdio.h>

int sum(int a, int b);//declaration

void main()
{
    int a, b;
    printf("Enter num:");
    scanf("%d %d", &a, &b);

    printf("total: %d",sum(a,b));//calling
}
int sum(int a, int b)//defination
{
    return a+b;
}
