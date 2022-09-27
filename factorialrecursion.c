#include<stdio.h>
int fact(int n){
    if(n>0)
    return(n*fact(n-1));
    else
    return 1;

    

}
void main(){
    int num;
    printf("enter a num");
    scanf("%d",&num);
    printf("%d",fact(num));
}