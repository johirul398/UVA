#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,i,j;
    string s;
    map<string,int>m;
    cin>>c;
    while(c--)
    {
        b=-999999;
        cin>>s;
        a=s.size();
        for(i=0;i<a;i++)
        {
            if(s[i]=='M')
            {
                m[s[i]]++;
                b=min(b,m[s[i]]);
            }
            if(s[i]=='A')
            {
                m[s[i]]++;
                b=min(b,m[s[i]]);
            }
            if(s[i]=='R')
            {
                m[s[i]]++;
                b=min(b,m[s[i]]);
            }
            if(s[i]=='G')
            {
                m[s[i]]++;
                  b=min(b,m[s[i]]);
            }
            if(s[i]=='T')
            {
                m[s[i]]++;
                  b=min(b,m[s[i]]);
            }
            if(s[i]=='I')
            {
                m[s[i]]++;
                  b=min(b,m[s[i]]);
            }
        }
        cout<<m.size()<<endl;
        m.clear();
    }
    return 0;
}
