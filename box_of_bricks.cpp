#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("i.txt","w",stdout);
    int i,k,j,l,m=1,n,b,c,x[10001],e[10001],sum;
   while(cin>>n)
   {
       if(n==0)
       {
           break;
       }
       l=0;
       sum=0;
   for(i=0;i<n;i++)
   {
       cin>>x[i];
       sum=sum+x[i];
   }
   l=sum/n;
   //m=0;
   b=0;
    for(i=0;i<n;i++)
   {
      if(x[i]>l)
      {
          b+=x[i]-l;
      }
   }
   cout<<"Set #"<<m++<<endl;
    cout<<"The minimum number of moves is "<<b<<"."<<endl;
    cout<<endl;

   }

    return 0;
}
