#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k=0,l=0,m=0,n,a,b;
   long long int d[10000];
    cin>>a>>b;
    for(i=0;i<a;i++)
    {
        cin>>n;
        d[i]=n;
    }
    for(j=0;j<a;j++)
    {
        if(d[j]>b)
        {
          l=l+2;
        }
        else
        {
            k=k+1;
        }
    }
    m=k+l;
    cout<<m<<endl;

    return 0;
}
