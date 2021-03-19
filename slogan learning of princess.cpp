#include <bits/stdc++.h>
using namespace std;
int main()
    {
         int g,h,i,j,k,l,m,n,o,p;
       map<string ,string>s;
       string a,b,c,d;
     // s.clear();
       cin>>o;
       cin.ignore();
       while(o--)
       {

         //  gets(b);
           getline(cin,a);
           getline(cin,b);
           s[a]=b;

       }
      cin>>h;
      cin.ignore();
      while(h--)
      {
        getline(cin,c);
       cout<<s[c]<<endl;
      }

        return 0;
    }
