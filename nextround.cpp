#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,a,b=0,c,n;
    cin>>n>>k;
    int s[n];
    for(i=0;i<n;i++)
    {
       cin>>s[i];
    }
    for(i=0;i<n;i++)
    {
    if(s[i]>=s[k-1]&&s[i]!=0)
    {
      b++;
    }
}
cout<<b<<endl;

    return 0;
}
