#include<bits/stdc++.h>
using namespace std;
#define N 1000000
unsigned long long int prime[N],a,mark[N];

void seive(unsigned long long int n)
{

  mark[1]=1;
  prime[a++]=2;
  for(unsigned long long int p=4;p<=n;p+=2)
   {
       mark[p]=1;
   }
   for(unsigned long long int p=3;p<=n;p+=2)
   {
      if(!mark[p])
      {
          prime[a++]=p;
          for(unsigned long long int i=p*p;i<=sqrt(n);i+=p*2)
          {
              mark[i]=1;
          }


      }
   }
   for(unsigned long long int p=0;p<a;p++)
   {
       cout<<prime[p]<<endl;
   }

}
int main()
{
    unsigned long long int n;
    cin>>n;
    seive(n);
    return 0;
}
