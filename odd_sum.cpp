#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k=0,p,s,a,i;
    cin>>t;
    for(int j=1;j<=t;j++)
    {
        cin>>n>>a;
        for(int y=n;y<=a;y++)
        {
            if(y%2!=0)
            {
                k+=y;
            }
        }
         cout<<"Case"<<" "<<j<<":"<<" "<<k<<endl;
         k=0;
    }

    return 0;
}

