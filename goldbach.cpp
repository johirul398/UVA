#include<bits/stdc++.h>
using namespace std;
int main()
{
  // bool prime[n+1];
   unsigned long long int gold[100000],j=0,k=0,l=0,n,a,d;
  // memset(prime,true,sizeof(prime));
    cin>>d;
    for(a=0;a<d;a++)
    {
     cin>>n;
     bool prime[n+1];
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
   for(long long int i=2;i<=n;i++)
   {
       if(prime[i])
       {
           gold[j]=i;
           j++;
       }
   }
   k=j;
    for(long long int i=0;i<j;i++)
   {
       k=j;
        for(long long int p=i;p<j;p++)
         {
           if((gold[i]+gold[k-1])==n)
             {
                 l=1;
                break;

           }
           k--;
    }
    if(l==1)
    {
         cout<<n<<" "<<"="<<" "<<gold[i]<<" "<<"+"<<" "<<gold[k-1]<<endl;
         break;
    }
}

    }
    return 0;
}
