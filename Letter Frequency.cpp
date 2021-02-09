#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,i,j;
    string s;
    char ch;
    map<char,int>m;
    cin>>c;
    cin.ignore();
    while(c--)
    {
        b=-9999999;
        getline(cin,s);
        a=s.size();
        for(i=0;i<a;i++)
        {
          if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
            {
                ch=tolower(s[i]);
                m[ch]++;
                b=max(b,m[ch]);
            }
        }
        e=m.size();
        map<char,int>::iterator it;
        for(it=m.begin();it!=m.end();it++)
        {
           if(it->second==b)
           {
                cout<<it->first;
           }
        }
        cout<<endl;
        m.clear();
    }


    return 0;
}
