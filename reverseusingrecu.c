#include<stdio.h>
#include<string.h>
    char string(){
        char c;
         printf("enter a charecter:");
            scanf("%c",&c);
        
        if (c!='\n')
        {
            string();
            printf("%c",c);

        }
        
        
}
void main(){

    string();

}