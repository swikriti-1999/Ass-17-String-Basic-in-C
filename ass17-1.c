#include<stdio.h>
int main()
{
    int i;
    char str[100];
    printf("\n enter a string to count the length ");
    fgets(str,100,stdin);
    for(i=0;str[i]!='\n';i++);
    printf("\n length of entered string is %d",i);
    return 0;
}