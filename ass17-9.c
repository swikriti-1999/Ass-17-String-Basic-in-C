#include<stdio.h>
int main()
{
    int i,j;
    char a[100],temp;
    printf("\n enter a string: ");
    fgets(a,100,stdin);
    printf("\n entered sting is %s",a);
    for(i=0;a[i];i++)
    {
        for(j=i+1;a[j]!='\0';j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\n string after arranged in ascending order is %s",a);
return 0;
}