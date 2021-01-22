#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,n,a,b,c,d,e,f;
    cin>>n;
    while(n--)
    {
       cin>>a>>b;
       if(b>a)
       {
           cout<<"impossible"<<endl;
       }
       else
       {
           c=a-b;
           if(c%2==1)
           {
               cout<<"impossible"<<endl;
           }
           else
           {
               d=c/2;
               e=a-d;
               cout<<max(d,e)<<" "<<min(d,e)<<endl;
           }
       }
    }
    return 0;
}
