#include <bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("input.txt","w",stdout);
     int e=0,f=0,g=0,i,j=0,l,m=0,n;
    set<string> s;
   string a,b;
   char c;
    while(getline(cin,a))
    {
        if(a=="0")
        {
            break;
        }
        b="";
        g=a.size();
        for(i=0;i<g;i++)
        {
         c=tolower(a[i]);
           if(c>='a'&&c<='z')
           {
              b=b+c;
           }
           else if(b!="")
           {
             s.insert(b);
             b="";
           }
        }
        if(b!="")
        {
            s.insert(b);
        }
    }
    set<string>:: iterator sa;
    for(sa=s.begin();sa!=s.end();sa++)
    {
        cout<<*sa<<endl;
    }

    return 0;
}
