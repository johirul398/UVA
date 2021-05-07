#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c,d,e,f,i,j,cnt;
    int h;
  // vector<int>arr;
 // map<vector<int>,int>s;
  while(cin>>a)
  {
    map<vector<int>,int>s;
    cnt=0;
    b=0;
      if(a==0)
      {
          break;
      }
  while(a--)
  {
      vector<int>sa;
      for(i=0;i<5;i++)
      {
          cin>>h;
          sa.push_back(h);

      }
      sort(sa.begin(),sa.end());
      s[sa]++;
  }
      map<vector<int>,int>::iterator it;
      for(it=s.begin();it!=s.end();it++)
      {
         if(it->second>b)
         {
             b=it->second;
         }
      }
       for(it=s.begin();it!=s.end();it++)
      {
         if(it->second==b)
         {
             cnt+=b;
         }
      }
  cout<<cnt<<endl;
  }

  return 0;
}
