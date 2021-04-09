#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,i,n,m;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        m=0;
        cin>>a>>b>>c;
        if(a<=20&&b<=20&&c<=20)
        {
            cout<<"Case "<<i<<": good"<<endl;
        }
        else
        {
             cout<<"Case "<<i<<": bad"<<endl;
        }

    }
    return 0;
}
