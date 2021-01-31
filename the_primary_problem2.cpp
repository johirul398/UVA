#include<bits/stdc++.h>
using namespace std;
#define xc 90000000
 bool prime[90000008];
long long int gold[9000000];
void seive()
{
    long long int j=0,b=0,k=0,w=0,r=0,s=0,count=0,large=-99999;
   memset(prime,true,sizeof(prime));
   prime[0]=prime[1]=false;
   for(unsigned long long int p=2;p<=sqrt(xc);p++)
   {
       if(prime[p]==true)
       {
           for(unsigned long long int i=p*p;i<=xc;i+=p)
           {
               prime[i]=false;
           }
       }
   }

}
int main()
{
   // freopen("sa.txt","w",stdout);
    long long int j=0,b=0,k=0,w=0,r=0,s=0,large=-99999,t,m;
    unsigned long long int a;
    seive();
    while(cin>>a)
    {
        b=0;
        if(a==0)
        {
            break;
        }

     for(m=1;m<=a/2;m++)
     {
         if(prime[m]&&prime[a-m])
         {
            b=1;
            break;
         }
        // cout<<prime[m]<<" ";
     }
     if(b==0)
   {
       cout<<a<<":"<<endl;
       cout<<"NO WAY!"<<endl;
   }
   else
   {
       cout<<a<<":"<<endl;
       cout<<m<<"+"<<a-m<<endl;
   }

    }

    return 0;
}
