#include <bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("input.txt","w",stdout);
     int e=0,f=0,g=0,i,j=0,l,m=0,n;
    set<string> s;
   string a,b;
   bool flag =true;
   char c;
   b="";
    while(cin>>a)
    {
        if(a=="0")
        {
            break;
        }
       // b="";
        g=a.size();

        for(i=0;i<g;i++)
        {
         c=tolower(a[i]);
         if(a[g-1]=='-')
         {
            // while(a[i]!='-')
            while(1)
             {
                 if(i==g-1)
                 {
                     break;
                 }
                 c=tolower(a[i]);
                 if(((c>='a'&&c<='z')||c=='-'))
                  {
                       b=b+c;
                        i++;
                       flag=false;
                  }
               else
                 {

                      flag=true;
                      i++;

                  }
             }

         }
         else if((c>='a'&&c<='z')||c=='-')
           {

                  b=b+c;
                  flag=true;

           }
          // cout<<b<<endl;
           else if(b!="")
           {
              // cout<<b<<endl;
             s.insert(b);
             b="";
             flag = true;
           }
        }
        if(b!=""&&flag==true)
        {
            s.insert(b);
            b="";
        }
    }
    set<string>:: iterator sa;
    for(sa=s.begin();sa!=s.end();sa++)
    {
        cout<<*sa<<endl;
    }
    s.clear();

    return 0;
}
