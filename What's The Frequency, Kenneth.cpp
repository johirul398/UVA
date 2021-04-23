#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,i,j;
    string s;
    map<char,int>m;
    while(getline(cin,s))
    {
        a=0,b=0;
        a=s.size();
        for(i=0;i<a;i++)
        {
            if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
            {
                 m[s[i]]++;
                 b=max(b,m[s[i]]);
            }

        }
        map<char,int>::iterator it;
        for(it=m.begin();it!=m.end();it++)
        {
            if(it->second==b)
            {
                cout<<it->first;
            }
        }
        cout<<" "<<b<<endl;
        m.clear();
    }
    return 0;
}
