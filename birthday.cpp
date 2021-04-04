#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int i,j=0,k,l=-999999999,x=999999999,m=0,n;
   // cin>>n;
     int a[5];
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<5;i++)
    {
        if(a[i]>l)
        {
            l=a[i];
        }
    }
    for(i=0;i<5;i++)
    {
        if(a[i]!=l)
        {
            m=m+a[i];
        }
    }
    for(i=0;i<5;i++)
    {
        if(a[i]<x)
        {
            x=a[i];
        }
    }
    for(i=0;i<5;i++)
    {
        if(a[i]!=x)
        {
            j=j+a[i];
        }
    }
    cout<<m<<" "<<j<<endl;
    return 0;
}
