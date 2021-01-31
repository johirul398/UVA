#include<bits/stdc++.h>
using namespace std;
#define xc 90000000
 bool prime[90000005];
long long int gold[90000005];
void seive()
{
    long long int j=0,b=0,k=0,w=0,r=0,s=0,count=0,large=-99999,t,m;
   memset(prime,true,sizeof(prime));
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
     long long int j=0,b=0,k=0,w=0,r=0,s=0,count=0,large=-99999,t,m;
    unsigned long long int a;
    seive();

    while(cin>>a)
    {
        b=0;

        if(a==0)
        {
            break;
        }
         for(unsigned long long int  i=2;i<=a;i++)
       {
       if(prime[i])
       {
           gold[j]=i;
           j++;
           count++;
       }
      }
      for( t=count-1;sqrt(t)>=0;t--)
   {
       if(b==1)
       {
           break;
       }
     for( m=0;m<count;m++)
     {
         if((gold[t]+gold[m])==a)
         {
            b=1;
           break;

        }
   }

 }
 if(b==0)
   {
       cout<<a<<":"<<endl;
       cout<<"NO WAY!"<<endl;
   }
   else
   {
       cout<<a<<":"<<endl;
       cout<<gold[m]<<"+"<<gold[t+1]<<endl;
   }



   }
    return 0;
}
