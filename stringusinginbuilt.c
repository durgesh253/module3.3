#include <stdio.h>
#include <string.h>
int main ()
{
    char string[100];
 
    // input the string
    printf ("Enter the string\n");
    gets (string);
 
    // Storing value of strlen function
    int length = strlen(string);
    printf("Length of string is: %d",length);
    return 0;
}