#include<stdio.h>
int main()
{
    int t,s,i,j,k,n;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        k=(n*n)-(n-1)*(n-1);
        //j=i+k;
        printf("%d\n",k);
    }
    return 0;
}
