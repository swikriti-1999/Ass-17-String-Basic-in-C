#include<stdio.h>
int main()
{
    int i;
    char str[100],cpy[100];
    printf("\n enter a string: ");
    fgets(str,100,stdin);
    for(i=0;str[i];i++)
    {
        cpy[i]=str[i];
    }
    printf("\n copied string is: %s",str);
return 0;
}