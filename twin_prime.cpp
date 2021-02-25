#include<bits/stdc++.h>
using namespace std;
 bool prime[20000010];
unsigned long long int gold[20000010];
void seive()
{
  // bool prime[n+1];
  // long long int gold[100000],
     long long int j=0;
   memset(prime,true,sizeof(prime));
   for(unsigned long long int p=2;p<=sqrt(20000000);p++)
   {
       if(prime[p]==true)
       {
           for(unsigned long long int i=p*2;i<=20000000;i+=p)
           {
               prime[i]=false;
           }
       }
   }
  /* for(unsigned long long int  i=2;i<=20000000;i++)
   {
       if(prime[i])
       {
           gold[j]=i;
           j++;
       }
   }*/
  /* for(int t=0;t<j;t++)
   {
       cout<<gold[t]<<" ";
   }*/

}
void twin()
{
    int l,i;
   l=1;
       for(i=3;i<=20000000;i++)
       {
           if(prime[i]&&prime[i+2])
           {
               gold[l]=i;
               l++;
           }
       }
}
int main()
{
    //seive();
    unsigned long long int i,j,k,a,b,c,d,e,f;
    seive();
    twin();

   while(cin>>a)
   {
       cout<<"("<<gold[a]<<", "<<gold[a]+2<<")"<<endl;
   }

    return 0;
}
