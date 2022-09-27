#include<stdio.h>
#include<string.h>
void main(){
    char a[100],b[100];
    int val;

    printf("enter a string;");
    scanf("%s",&a);

    strcpy(b,a);

    strrev(b);

    val=strcmp(a,b);
    if (val==0)
    {
         printf("this is palindrom");
    }
    else{
        printf("this is not palindrom");
    }
    

    
}