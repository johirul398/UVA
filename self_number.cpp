#include<bits/stdc++.h>
using namespace std;
char s[1000001];
int main()
{
    memset(s,0,sizeof(s));
    int i,j,k,l,m,n,b,a,x;
   // int s[1000005];
    for(i=1;i<=999999;i++)
    {
        x=0;
        a=i;
        while(a)
        {
            x+=a%10;
            a=a/10;
        }
       if(x+i<=1000000)
       {
           s[x+i]=1;
       }
    }
    for(i=1;i<=1000000;i++)
    {
        if(!s[i])
        {
            cout<<i<<endl;
        }
    }

    return 0;
}
