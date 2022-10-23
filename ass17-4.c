#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("\n enter a string: ");
    fgets(str,100,stdin);
    char*strupr(char*);
    printf("\n given string converted to uppercase: %s",strupr(str));
return 0;
}