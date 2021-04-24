#include <bits/stdc++.h>
using namespace std;

int main()
    {
      int i,b,c,x,z,n,j;
      vector<int>v;
       cin>>z;
       while(z--)
       {
           b=-999999,c=-9999999;
          cin>>n;
          for(i=0;i<n;i++)
          {
              cin>>x;
              v.push_back(x);
          }
          for(i=0;i<n-1;i++)
          {
             b=max(b,v[i]) ;
             c=max((b-v[i+1]),c);
          }
          cout<<c<<endl;
          v.clear();

       }

       return 0;
    }
