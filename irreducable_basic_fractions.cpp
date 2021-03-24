#include<bits/stdc++.h>
using namespace std;
void seive(long long int n)
{
    long long int a,b,c,d,e,f,i;
    a=n;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                n/=i;
            }
            a-=a/i;
        }
    }
    if(n>1)
    {
        a-=a/n;
    }
    cout<<a<<endl;
}
 int main()
{
   unsigned long long int i,x,c,b,g,r;
  while(cin>>i)
  {
      if(i==0)
      {
          break;
      }
      seive(i);

  }

    return 0;
}
