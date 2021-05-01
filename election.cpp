#include <bits/stdc++.h>
using namespace std;
int main()
    {
        //freopen("input.txt","w",stdout);
         int g,h,i,j,k,l,m,n,o,p;
       map<string ,string>s;
       map<string,int>x;
       string a,b,c,d,e;
      cin>>k;
      getline(cin,e);
      while(k--)
      {
          s.clear();
          x.clear();
       cin>>o;
       getline(cin,e);
      // cin.ignore();
       while(o--)
       {

           getline(cin,a);
           getline(cin,b);
           s[a]=b;

       }
       g=0;
      cin>>h;
      getline(cin,e);
     // cin.ignore();
      while(h--)
      {
        getline(cin,c);
        if(s.find(c)!=s.end())
        {
           x[c]++;
           g=max(g,x[c]);

        }
      }
      map<string,int>::iterator it;
      p=0;
     for(it=x.begin();it!=x.end();it++)
     {
        if(it->second==g)
        {
           p++;
           d=it->first;
        }
     }
   if(p==1) cout<<s[d]<<endl;
   else puts("tie");

   if(k)puts("");
      }

        return 0;
    }
