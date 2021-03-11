#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g;
    string s;
    cin>>e;
    while(e--)
    {
        cin>>s;
        g=s.size();
        a=0,f=0,c=0;
        for(int i=0;i<g;i++)
        {
            if(s[0]=='A')
            {
                if(s[i]=='A')
            {
                f++;
                c=1;
                a=0;
            }
            if(s[i]=='B')
            {
                f--;
                c=0;
                a=1;
            }
            if(s[i]=='C'&&a==0)
            {
                f--;

            }
            if(s[i]=='C'&&c==0)
            {
                f++;
            }
          }
          if(s[0]=='B')
            {
                if(s[i]=='A')
            {
                f++;
                c=1;
                a=0;
            }
            if(s[i]=='B')
            {
                f--;
                c=0;
                a=1;
            }
            if(s[i]=='C'&&a==0)
            {
                f--;

            }
            if(s[i]=='C'&&c==0)
            {
                f++;
            }
          }
          if(s[0]=='C')
            {
                if(s[i]=='C')
            {
                f++;
                c=1;
                a=0;
            }
            if(s[i]=='B')
            {
                f--;
                c=0;
                a=1;
            }
            if(s[i]=='C'&&a==0)
            {
                f--;

            }
            if(s[i]=='C'&&c==0)
            {
                f++;
            }
          }
        }
        if(f==0) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}
