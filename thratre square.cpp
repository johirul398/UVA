#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long  int m,n,a,i,j;
    cin>>m>>n>>a;
    if(m%a==0)
    {
      i=m/a;
    }
    else
    {
       i=1+m/a;
    }
    if(n%a==0)
    {
      j=n/a;
    }
    else
    {
       j=1+n/a;
    }
    cout<<i*j<<endl;
    return 0;
}
