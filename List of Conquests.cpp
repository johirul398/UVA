#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k=1,l,n;
    string s,x;
    map<string,int>m;
    cin>>n;
    cin.ignore();
    while(n--)
    {
       cin>>s;
       getline(cin,x);
       m[s]++;
    }
   map<string,int>::iterator it;
    for(it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    m.clear();
    return 0;
}
