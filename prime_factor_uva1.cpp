#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int i,j,k,l=0,n,o,p[10001],a,b,c=0,d;
    while(cin>>a)
    {
        d=0;
        if(a==0)
        {
            break;
        }
        c=0;
        n=a;
        if(a<0)
        {
            c=1;
            n=a-a-a;
        }
     while (n % 2 == 0)
     {
        p[d++]=2;
        n = n/2;
    }

    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            p[d++]=i;
            n = n/i;
        }
    }

    if (n > 2)
       {
           p[d++]=n;
       }
       if(c==1)
       {
           cout<<a<<" = -1";
        for(int y=0;y<d;y++)
       {
           cout<<" x "<<p[y];
       }
       cout<<endl;
       }
       else if(d==1)
       {
        cout<<a<<" = ";
       // cout<<p[0]<<" x ";
        for(int y=0;y<d;y++)
          {
           cout<<p[y];
           }
          // cout<<p[d-1];
           cout<<endl;
          }
        else
       {
        cout<<a<<" = ";
        cout<<p[0];
        for(int y=1;y<d;y++)
          {
           cout<<" x "<<p[y];
          }
           cout<<endl;
          }
       }
    return 0;
}
