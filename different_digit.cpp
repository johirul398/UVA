#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,l,j,k=0,a,f=0,c,d,e,n,m;

    while(cin>>n>>m)
    {
        e=0;
       int b[1001];

       for(i=n;i<=m;i++)
       {
           l=0;
           c=i;
           while(c!=0)
           {
               a=c%10;
               b[l]=a;
               c=c/10;
               l++;

           }
           sort(b,b+l);
           k=0;
           for(j=0;j<l-1;j++)
           {
               if(b[j]!=b[j+1])
               {
                  k++;
               }

           }
           if(k==l-1)
           {
               e++;
           }
       }
       cout<<e<<endl;
    }
    return 0;
}
