#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long   int a,b,c,d,i=0,j,s[100000];
  while(cin>>a)
  {
      s[i]=a;
      sort(s,s+i+1);
      if(i%2==0)
      {
          cout<<s[i/2]<<endl;
      }
      else
      {
         cout<<(s[i/2]+s[i/2+1])/2<<endl;
      }
      i++;
  }

    return 0;
}
