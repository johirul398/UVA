#include<bits/stdc++.h>
using namespace std;
void seive(unsigned long long int n)
{
   bool prime[n+1];
   long long int gold[100000],j=0;
   memset(prime,true,sizeof(prime));
   for(unsigned long long int p=2;p<=sqrt(n);p++)
   {
       if(prime[p]==true)
       {
           for(unsigned long long int i=p*2;i<=n;i+=p)
           {
               prime[i]=false;
           }
       }
   }
   for(unsigned long long int  i=2;i<=n;i++)
   {
       if(prime[i])
       {
           gold[j]=i;
           j++;
       }
   }
   for(int t=0;t<j;t++)
   {
       cout<<gold[t]<<" ";
   }

}
int main()
{
    unsigned long long int n;
    cin>>n;
    seive(n);
    return 0;
}
