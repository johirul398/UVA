#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  xc 1000000
 bool prime[1000000];
 long long int pprime[100000];
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
   /*for(int t=0;t<j;t++)
   {
       cout<<gold[t]<<" ";
   }*/

}
void segsieve(long long int l,long long int r )
{
   int count =0;
   long long int large=-99999,small=99999,s=0,p=0,b=0,k=0,x=0,y=0;
    bool isprime[r-l+1];
    memset(isprime,true,sizeof(isprime));
    if(l==1)isprime[0]=false;
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
            pprime[y]=i+l;
            y++;
            count++;
           // cout<<i+l<<" ";
           // cout<<pprime[0];
        }
    }
   // cout<<count<<endl;
    if(count<=1)
    {
        cout<<"There are no adjacent primes."<<endl;
    }
    else if(count==2)
    {
        cout<<pprime[0]<<","<<pprime[1]<<" are closest, "<<pprime[0]<<","<<pprime[1]<<" are most distant."<<endl;

    }
    else
    {
       for(long long int i=0;i<y-1;i++)
       {
          s=pprime[i+1]-pprime[i];
          if(s>large)
          {
              p=pprime[i];
              b=pprime[i+1];
              large=s;
          }
           if(s<small)
           {
               k=pprime[i];
               x=pprime[i+1];
               small=s;
           }
       }
       cout<<k<<","<<x<<" are closest, "<<p<<","<<b<<" are most distant."<<endl;
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
