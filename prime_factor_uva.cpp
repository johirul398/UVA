#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int i,j,k,l=0,n,o,p[10001],a,b,c=0,d;
    while(cin>>a)
    {
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
        l=n;
       for(j=0,i=2;i<=n;i++)
       {
         // l=n;
          k=0;
          while(l%i==0)
          {
            p[j++]=i;
            l=l/i;
          }

       }
       if(c==1)
       {
           cout<<a<<" = -1";
        for(int y=0;y<j;y++)
       {
           cout<<" x "<<p[y];
       }
       cout<<endl;
       }
       else
       {
        cout<<a<<" = ";
        cout<<p[0]<<" x ";
        for(int y=1;y<j-1;y++)
          {
           cout<<p[y]<<" x ";
           }
           cout<<p[j-1];
           cout<<endl;
          }

    }
    return 0;
}
