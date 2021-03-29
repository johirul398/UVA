#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,l;
    char s[10],t[10];
    gets(s);
    while(s[i]!='\0')
    {
        t[i]=s[i]-32;
        i++;
    }
    t[i]='\0';
   // l=i;
   // puts(t);
   for(l=0;l<i;l++){
   printf("%c",t[l]);
   }
    return 0;
}

