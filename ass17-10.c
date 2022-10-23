#include<stdio.h>
int main()
{
    char a[100];
    int i,frq[150]={0};
    printf("\n enter th string: ");
    fgets(a,100,stdin);
    // printf("%c %d",a,a);

    for(i=0;a[i]!='\0';i++)
    {
        frq[a[i]]++;
    }
    for(i=0;i<150;i++)
    {
        if(frq[i]!=0)
        printf("\n %c ==> %d",i,frq[i]);
    }
return 0;
}