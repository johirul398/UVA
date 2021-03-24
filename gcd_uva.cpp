#include<bits/stdc++.h>
using namespace std;
int gcd(unsigned long long int a,unsigned long long int b)
{
   if (a == 0 || b == 0)
      return 0;
   else if (a == b)
      return a;
   else if (a > b)
      return gcd(b,a-b);
   else return gcd(a, b-a);
}
 int main()
{
   unsigned long long int i,j,x,c,b,g;
   while(cin>>x)
   {
       if(x==0)
       {
           break;
       }
    g=0;
    for(i=1;i<x;i++)
    {
       for(j=i+1;j<=x;j++)
    {
      g+=gcd(i,j);
    }
   }
   cout<<g<<endl;
  }

    return 0;
}
