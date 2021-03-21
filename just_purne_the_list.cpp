#include<bits/stdc++.h>
using namespace std;
int main()
{
  // freopen("input.txt","w",stdout);
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   set<int>s;
  map<int,int>sa,t;
  cin>>a;
  while(a--)
  {
    cin>>b>>c;
    g=0,h=0,j=0,k=0,l=0,m=0,n=0;
    for(i=0;i<b;i++)
    {
        cin>>e;
        sa[e]++;
        s.insert(e);
    }
     for(i=0;i<c;i++)
    {
        cin>>e;
        t[e]++;
        s.insert(e);
    }

   set<int>::iterator it;

       for(it=s.begin();it!=s.end();it++)
       {
          n=abs(sa[*it]-t[*it]);
          m=m+n;
       }
  // }
   cout<<m<<endl;
  t.clear();
  sa.clear();
  s.clear();
  }

    return 0;
}
