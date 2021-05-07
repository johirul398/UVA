#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int e,v,b,n,m,p,k,l,g;
  map<string,int>s;
  char ch[10000];
 // vector<char>ch;
    string sa,a;
   cin>>m>>n;
   e=m;
  for(int i=0;i<m;i++)
   {
      cin>>a>>b;
        s[a]=b;
   }
 // cin.ignore();
   for(int i=0;i<n;i++)
   {
       g=0;
      // getchar();
     //  string c;
     // cin.ignore();
      // getline(cin,c);
      // cout<<c<<" "<<endl;
      //  stringstream sagor;
       // sagor<<c;
       // string x;
         while(cin>>sa&&sa!=".")
          {
             g+=s[sa];
          }
       cout<<g<<endl;
      // sagor.clear();
   }

    return 0;
}
