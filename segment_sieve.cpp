#include<bits/stdc++.h>
using namespace std;
#define  xc 10
 bool prime[100000];
long long int gold[100000];
void seive()
{
    long long int j=0;
   memset(prime,true,sizeof(prime));
   for(unsigned long long int p=2;p<=sqrt(xc);p++)
   {
       if(prime[p]==true)
       {
           for(unsigned long long int i=p*2;i<=xc;i+=p)
           {
               prime[i]=false;
           }
       }
   }
   for(unsigned long long int  i=2;i<=xc;i++)
   {
       if(prime[i])
       {
           gold[j]=i;
           j++;
       }
   }
  /* for(int t=0;t<j;t++)
   {
       cout<<gold[t]<<" ";
   }*/

}
void segsieve( int l, int r )
{
    bool isprime[r-l+1];
    memset(isprime,true,sizeof(isprime));

    if(l==1)
    {
       isprime[0]=false;
    }
        //isprime[0]==false;
    for(int i=0;gold[i]*gold[i]<=r;i++)
    {
     long long  int cp=gold[i];
      long long int base=(l/cp)*cp;
       if(base<l)base+=cp;
       for(long long int j=base;j<=r;j+=cp)
       {
           isprime[j-l]=false;
       }
       if(base==cp)isprime[base-l]=true;
    }
    for(long long int i=0;i<r-l+1;i++)
    {
        if(isprime[i])
        {
            cout<<(i+l)<<endl;
        }
    }

}
int main()
{
    unsigned long long int a,v,b,n,c,t,e,r;
    seive();
    //cin>>n;
    while(cin>>a>>b)
    {
        segsieve(a,b);
    }
    return 0;
}
