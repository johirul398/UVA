#include<bits/stdc++.h>
using namespace std;
 int  bigmod ( int a, int p, int m )
{
    if ( p == 0 )return 1;

    if ( p%2==0 )
    {
         int c=bigmod(a,p/2,m);
         return (c*c)%m;
    }
    else
    {
        return (a%m*bigmod(a,p-1,m))%m;
    }
}
int main()
{
     int a,b,c,d,e=0,g,f;
    while(cin>>a>>b>>c)
    {

        cout<< bigmod(a,b,c)<<endl;




    }
}
