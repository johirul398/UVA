#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,i,j;
    string s;
    map<char,int>m;
    cin>>c;
    while(c--)
    {
        b=99999999;
        cin>>s;
        a=s.size();
        for(i=0;i<a;i++)
        {
            if(s[i]=='M')
            {
                m[s[i]]++;
              // b=min(b,m[s[i]]);
            }
            if(s[i]=='A')
            {
                m[s[i]]++;
               // b=min(b,m[s[i]]);
            }
            if(s[i]=='R')
            {
                m[s[i]]++;
               // b=min(b,m[s[i]]);
            }
            if(s[i]=='G')
            {
                m[s[i]]++;
                 // b=min(b,m[s[i]]);
            }
            if(s[i]=='T')
            {
                m[s[i]]++;
                 // b=min(b,m[s[i]]);
            }
            if(s[i]=='I')
            {
                m[s[i]]++;
                 // b=min(b,m[s[i]]);
            }
        }
        e=m.size();
        map<char,int>::iterator it;
        for(it=m.begin();it!=m.end();it++)
        {
             if(it->first=='M')
            {
               f=it->second/1;
               b=min(b,f);
            }
            if(it->first=='A')
            {
               f=it->second/3;
                b=min(b,f);
            }
            if(it->first=='R')
            {
                 f=it->second/2;
                b=min(b,f);
            }
            if(it->first=='G')
            {
                 f=it->second/1;
                 b=min(b,f);
            }
            if(it->first=='T')
            {
                 f=it->second/1;
                b=min(b,f);
            }
            if(it->first=='I')
            {
                 f=it->second/1;
                b=min(b,f);
            }
        }
        if(e==6)
        {
            cout<<b<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
        m.clear();
    }
    return 0;
}
