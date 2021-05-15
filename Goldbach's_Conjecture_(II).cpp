#include<bits/stdc++.h>
using namespace std;
#define n 32770
 bool prime[32780];
long long int gold[32780];
void seive()
{
   long long int j=0;
   memset(prime,true,sizeof(prime));
   prime[0]=prime[1]=false;
   for(long long int p=2;p<=sqrt(n);p++)
   {
       if(prime[p]==true)
       {
           for(long long int i=p*2;i<=n;i+=p)
           {
               prime[i]=false;
           }
       }
   }
  /* for( long long int  i=2;i<=n;i++)
   {
       if(prime[i])
       {
           gold[j]=i;
           j++;
       }
   }*/

}
int main()
{
    seive();
     long long int a,b,c=0,d,e,f,g,t,o,p,i,k,l;
     while(cin>>a)
     {
         b=0;
         c=0;
         if(a==0)
         {
             break;
         }
        for(i=0;i<a;i++)
         {
             if(prime[i])
             {

               gold[c++]=i;
             }
         }
         for(i=0;i<c;i++)
         {
             // cout<<gold[i]<<endl;;
             for(l=i;l<c;l++)
             {
                 if(gold[i]+gold[l]==a)
                 {
                    b++;
                 }
             }
         }
         cout<<b<<endl;

     }
    return 0;
}
