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
  while(cin>>i>>j)
  {
       g=gcd(i,j);

      cout<<g<<endl;
      g=0;
  }

    return 0;
}
