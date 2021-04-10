
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j=0,k=0,l=0,m=0,p=0,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
      cin>>a[i];

    }
    for(j=0;j<n;j++)
    {
      if(a[j]%2==0)
      {
          k++;
          m=j;
      }
      if(a[j]%2!=0)
      {
          l++;
          p=j;
      }
    }
    if(k==1)
    {
        cout<<m+1<<endl;
    }
   else if(l==1)
    {
        cout<<p+1<<endl;
    }



    return 0;
}
