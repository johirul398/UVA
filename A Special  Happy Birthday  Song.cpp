#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,p,k,l,n,f=0;
   string s;
   string w[]={"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
    cin>>n;
   l=n;
   vector<string>v;
    while(l--)
    {
     cin>>s;
     v.push_back(s);
    }
    f=ceil(n/16)+1;
    for(i=0,p=0,k=0;i<f*16;i++)
    {
        cout<<v[p++]<<": "<<w[k++]<<endl;;
        if(p==n)
        {
            p=0;
        }
         if(k==16)
        {
            k=0;
        }
    }

    return 0;
}

