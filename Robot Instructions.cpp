#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,i,j;
    map<int,string>m;
    string s,x;
    cin>>e;
    while(e--)
    {
        cin>>d;
        // cin.ignore();
        a=0;
        for(i=1;i<=d;i++)
        {
          // getline(cin,s);
           cin>>s;
            if(s=="LEFT")
            {
                m[i]=s;
                a--;
                 cout<<i<<" ";
            }
           else if(s=="RIGHT")
            {
                m[i]=s;
                a++;
            }
            else
            {
               cin>>x>>b;
               if(m[b]=="LEFT")
               {
                   a--;
                   m[i]="LEFT";
               }
               else
               {
                   a++;
                   m[i]="RIGHT";
               }
            }
        }
        cout<<a<<endl;
        m.clear();
    }
    return 0;
}
