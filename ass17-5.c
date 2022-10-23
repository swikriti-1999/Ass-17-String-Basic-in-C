#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("\n enter a string: ");
    fgets(str,100,stdin);
    char*strlwr(char*);
    printf("\n given string converted to lowercase: %s",strlwr(str));
return 0;
}