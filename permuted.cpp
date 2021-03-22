#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a=0,b=3,c=3,d=0,x=0,t[10000],i,j,l,m;
    int k[1000];
    cin>>a;
    while(a--)
    {
        cout<<endl;
        for(i=0;i<3;i++)
        {
            cin>>t[i];
        }
        for(i=0;i<3;i++)
        {
            cin>>k[i];
        }
         m=3;
         x=0;
        for(i=0;i<b;i++)
        {
            l=9999;
            d=0;
           for(j=0;j<(c-x);j++)
           {
                 if(t[j]<=l)
                     {
                       l=t[j];
                       d++;
                    }

           }
           cout<<k[d-1]<<" ";
           m=m-1;
          for(int r=(d-1);r<m;r++)
          {
              t[r]=t[r+1];
              k[r]=k[r+1];
          }
          x=x+1;
        }

    }
    return 0;
}
