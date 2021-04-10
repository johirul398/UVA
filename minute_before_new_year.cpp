#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,e,f,g,i,j,k,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        f=0;
        g=0;
        c=1440;
        cin>>a>>b;
        f=a*60;
        g=f+b;
        cout<<c-g<<endl;

    }
    return 0;
}
