#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,i,j;
    string s;
    while(getline(cin,s))
    {
        a=0;
        a=s.size();
        for(i=0;i<a;i++)
        {
            if(s[i]>='A'&&s[i]<='C')
            {
                cout<<2;
            }
            if(s[i]>='D'&&s[i]<='F')
            {
                cout<<3;
            }
            if(s[i]>='G'&&s[i]<='I')
            {
                cout<<4;
            }
            if(s[i]>='J'&&s[i]<='L')
            {
                cout<<5;
            }
            if(s[i]>='M'&&s[i]<='O')
            {
                cout<<6;
            }
            if(s[i]>='P'&&s[i]<='S')
            {
                cout<<7;
            }
            if(s[i]>='T'&&s[i]<='V')
            {
                cout<<8;
            }
            if(s[i]>='W'&&s[i]<='Z')
            {
                cout<<9;
            }
            if(s[i]=='1')
            {
                cout<<1;
            }
            if(s[i]=='0')
            {
                cout<<0;
            }
            if(s[i]=='-')
            {
                cout<<"-";
            }

        }
        cout<<endl;
    }
    return 0;
}
