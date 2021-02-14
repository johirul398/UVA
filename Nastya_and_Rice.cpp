#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,k,l,a,b,c,d,n;
    cin>>k;
    while(k--)
    {
      cin>>n>>a>>b>>c>>d;
      if((a-b)*n>(c+d)||(a+b)*n<(c-d))
      {
          cout<<"No"<<endl;
      }
      else
      {
          cout<<"Yes"<<endl;
      }
    }
    return 0;
}
