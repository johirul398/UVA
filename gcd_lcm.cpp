#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,l,a,b;
    cin>>l;
    while(l--)
    {
       cin>>a>>b;
       if(b%a==0)
       {
           cout<<a<<" "<<b<<endl;
       }
       else
       {
           cout<<"-1"<<endl;
       }
    }
    return 0;
}
