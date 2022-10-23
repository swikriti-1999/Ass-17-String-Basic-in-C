#include<stdio.h>
#include<string.h>
int main()
{
    int i,alpha=0,digit=0,special=0;
    char str[100];
    printf("\n enter a string: ");
    fgets(str,100,stdin);
    printf("%s",str);
    for(i=0;str[i]!='\n';i++)
    {
        if((str[i]>='A' && str[i]<='Z')|| (str[i]>='a' && str[i]<='z'))
        alpha++;
        else
        if(str[i]>='0' && str[i]<='9')
        digit++;
        else
        special++;
    }
    printf("\n the total number of alphabets, digits and special characters in a string is:");
    printf("\n alpabet: %d, digit: %d, special character: %d",alpha,digit,special);
return 0;
}