#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,f,i,j,k,l;
    string s,x;
    map<string,int>m;
    while(cin>>f>>s)
    {
        c=-999999;
        a=s.size();

        for(i=0;i<a-f+1;i++)
        {
            x="";
            k=f;
            j=i;
            while(k--)
            {
               x+=s[j] ;
               j++;
            }
            m[x]++;
           c=max(c,m[x]);
        }
       map<string,int>::iterator it;
        for(it=m.begin();it!=m.end();it++)
        {
            if(it->second==c)
            {
                cout<<it->first<<endl;
                break;
            }
        }
        m.clear();
    }

    return 0;
}
