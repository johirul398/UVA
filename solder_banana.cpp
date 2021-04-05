#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j=0,k,n,m,a,sum=0,w;
    cin>>k>>n>>w;
    for(i=1;i<=w;i++)
    {
        j=j+k*i;

    }
    if(j<=n)
    {
        a=0;
        cout<<a<<endl;
    }
    else
        {
      sum=j-n;
       cout<<sum<<endl;
        }

    return 0;
}
