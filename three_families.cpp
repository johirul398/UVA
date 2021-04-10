#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,e,f,n,m,i,j,g;
    cin>>n;
    for(i=0;i<n;i++)
    {
        c=0;
        d=0;
        e=0;
        g=0;
        j=0;
        cin>>a>>b>>m;
        j=a+b;
        c=(m/j)*a;
        d=m-c;
        e=c-d;
        g=(e+c);
        if(g<=0)
        {
            cout<<0<<endl;
        }
        else
        {
             cout<<g<<endl;
        }

    }
    return 0;
}
