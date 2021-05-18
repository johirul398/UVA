#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int i,j,k,l=0,n,o,p[10001];
    while(cin>>n)
    {
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
       for(int y=0;y<j;y++)
       {
           cout<<p[y]<<" ";
       }
    }
    return 0;
}
