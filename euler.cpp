#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
ll euler(ll n,ll x)
{
  if(x==0)
  {
      return 1;
  }
  else
  {
      return(n*euler(n,x-1));
  }
}
int main()
{
    ll a,m,f,g,h,j,k,i;
    cin>>k;
    for(i=1;i<=k;i++)
    {
    cin>>a>>m;
    //f=(m-1)/2;
   g=euler(a,(m-1)/2);
   //h=g%m;
   if(a==0)
   {
       cout<<"YES"<<endl;
   }
  else if(g%m==1)
   {
       cout<<"YES"<<endl;
   }
  else
   {
       cout<<"NO"<<endl;
   }
   g=0;
    }
    return 0;
}
