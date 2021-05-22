#include<bits/stdc++.h>
using namespace std;
 bool prime[1000000];
long long int gold[100000];
void seive(long long int xc)
{
    long long int j=0,b=0,k=0,w=0,r=0,s=0,count=0,large=-99999;
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
   for(unsigned long long int  i=2;i<=xc;i++)
   {
       if(prime[i])
       {
           gold[j]=i;
           j++;
           count++;
       }
   }
   //cout<<count;
  for(int t=0;t*t<count;t++)
   {
     for(int m=0;m<count;m++)
     {
         if((gold[t]+gold[m])==xc)
         {
            b=1;
            k=gold[m]-gold[t];
            if(k>large)
            {
                s=gold[m];
                r=gold[t];
                large=k;
            }

         }
     }
   }
   if(b==0)
   {
       cout<<xc<<":"<<endl;
       cout<<"NO WAY!"<<endl;
   }
   else
   {
       cout<<xc<<":"<<endl;
       cout<<r<<"+"<<s<<endl;
   }

}
int main()
{
   // freopen("sa.txt","w",stdout);
    unsigned long long int a;
    //seive();
    //cin>>n;
    while(cin>>a)
    {
        if(a==0)
        {
            break;
        }
        seive(a);
    }
    return 0;
}
