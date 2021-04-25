#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("k1.txt","w",stdout);
    int t,i,n,a,b,c,d,e,f;
    string s;
    cin>>t;
    cin.ignore();
    while(t--)
    {
         a=0,b=1;
       getline(cin,s);
       n=s.size();
        for(i=0;i<n;i++)
        {
          if(s[i]=='O')
          {
              a+=b;
              b++;
          }
          if(s[i]=='X')
          {
              b=1;
          }
        }
        cout<<a<<endl;
        s="";

    }

    return 0;
}
