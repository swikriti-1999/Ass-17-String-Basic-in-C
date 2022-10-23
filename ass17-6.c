#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("\n enter a string: ");
    fgets(str,100,stdin);
    char*strrev(char*);
    printf("\n given string converted to reverse: %s",strrev(str));
return 0;
}