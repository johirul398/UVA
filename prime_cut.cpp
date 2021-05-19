#include<bits/stdc++.h>
using namespace std;
int main()
{
  // freopen("sa.txt","w",stdout);
    long long int n,c,a,s,b,t,y,z,d,e,f,g,h;
    while(cin>>n>>c)
    {
        a=0;
        b=0;
        s=0;
        y=0;
        z=0;
        e=0;
        g=0;
    bool prime[n+1];
   long long int gold[100000],j=0;
   memset(prime,true,sizeof(prime));
   prime[1]=1;
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
   for(unsigned long long int  i=1;i<=n;i++)
   {
       if(prime[i])
       {
           gold[j]=i;
           j++;
       }
   }
   if(j%2==0)
   {
      a=c*2;
   }
   else{
    a=c*2-1;
   }
   b=j-a;
   s=b/2;
   cout<<n<<" "<<c<<":";
   if(n==c||a>=j)
   {
      for( long long int  i=0;i<j;i++)
      {
           cout<<" "<<gold[i];
      }
      cout<<endl;
      cout<<endl;
   }
   else
   {
   for(int xd=0;xd<a;xd++)
     {
       cout<<" "<<gold[s++];
     }
     cout<<endl;
     cout<<endl;
   }
}

    return 0;
}
