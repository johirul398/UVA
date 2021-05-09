#include<bits/stdc++.h>
using namespace std;
int main()
{
  map<string,string>s;
    string sa;
    string c;
    while(getline(cin,sa)&&sa!="")
    {
        string a,b;
        stringstream sagor;
        sagor<<sa;
        sagor>>a>>b;
        s[b]=a;
    }
    while(cin>>c)
    {
        if(s.find(c)!=s.end())
        {
             cout<<s[c]<<endl;
        }
        else
        {
           cout<<"eh"<<endl;
        }
    }

    return 0;
}
