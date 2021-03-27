#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("ta.txt","w",stdout);
    long long int i,j,t,a=0,b,k,l=0,n,o=0,p[10001],ma[10001];
    cout<<"The 1500'th ugly number is ";
    while(o<150)
    {
     for(i=2;o<=150;i++)
     {
         //cout<<o;
         l=i;
       for(j=0,t=2;t<=i;t++)
       {

          while(l%t==0)
          {
            p[j]=t;
            l=l/t;
            j++;
          }
       }
        a=0;
          for(n=0;n<j;n++)
         {
           if(p[n]==2||p[n]==3||p[n]==5)
           {
               a++;
           }
       }
       if(a==j)
       {
           ma[o]=i;
           o++;
          // cout<<o<<endl;
       }

     }
    cout<<ma[45]<<".";
 }
// cout<<ma[1500];

     return 0;
}
