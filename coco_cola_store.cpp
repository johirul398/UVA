#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,a,b,c,d;
    cin>>k;
    while(k--)
    {
        cin>>a>>b>>c;
        d=0;
        l=a+b;
        while(l>=c)
        {
            d=d+l/c;
            l=l%c+l/c;
        }
        cout<<d<<endl;
    }
    return 0;
}
