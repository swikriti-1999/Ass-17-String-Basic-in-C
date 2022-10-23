#include<stdio.h>
int main()
{
    int i,count=0;
    char str[100],ch;
    printf("\n enter any number of character: ");
    fgets(str,100,stdin);
    printf("entered character is %s",str);
    printf("\n enter the character to know its occurance: ");
    scanf("%c",&ch);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch)
        count++;
    }
    if(count==0)
    printf("\n entered character is not present");
    else
    printf("\n entered character occurance is %d",count);
    return 0;
}