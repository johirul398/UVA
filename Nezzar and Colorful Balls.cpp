#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    map<int,int>v;
    cin>>n;
    while(n--)
    {
        int a,b;
        cin>>a;
         int f=0,s=0,e=0,x=-999999,g=0;
        for(int i=1;i<=a;i++)
        {
            cin>>b;
            v[b]++;
            x=max(x,v[b]);

        }

        cout<<x<<endl;

        v.clear();
    }
    return 0;
}
