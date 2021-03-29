#include<stdio.h>
#include<string.h>
int main()
{
    int i,p;
    char s[]="hello";
    for(i=1;i<=5;i++)
    {
        p=i+1;
        printf("\n%-5.*s",p,s);
    }
    return 0;
}
