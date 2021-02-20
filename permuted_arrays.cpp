#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c=0,d=0,t[10000],i,j,l,m;
    int k[1000];
    string x,y;
    string z[5000];
    cin>>a;
    getchar();
    while(a--)
    {
      getchar() ;
      c=1,i=1;
      getline(cin,y);
      stringstream sa;
      sa << y;

      while(sa>>t[c])
      {
          c++;
      }
      getline(cin,y);
      sa.clear();
      sa << y;
      while(sa>>z[t[i]])
      {
          i++;
      }
      for(j=1;j<c;j++)
      {
          cout<<z[j]<<endl;
      }
      if(a)
      {
          puts("");
      }
    }
    return 0;
}
