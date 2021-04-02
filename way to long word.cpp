#include<bits/stdc++.h>
using namespace std;
int main()
{

  long long  int n,i,j,l;
  char a[6000];

    cin>>n;
    for(i=0;i<n;i++)
    {
       cin>>a;
       j=strlen(a);
      if(j<11)
       {
           cout<<a<<endl;
       }
       else
       {
           cout<<a[0]<<j-2<<a[j-1]<<endl;

      }
    }

    return 0;
}
