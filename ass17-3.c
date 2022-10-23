#include<stdio.h>
int main()
{
    char str[100];
    int i,count=0;
    printf("\n enter a string: ");
    fgets(str,100,stdin);
    for(i=0;str[i];i++)
    {
        if(str[i]=='a' || str[i]=='e'|| str[i]=='i'|| str[i]=='o'||str[i]=='u')
        count++;
    }
    printf("\n no.of vowels in the given string is: %d",count);
return 0;
}