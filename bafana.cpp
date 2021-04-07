#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,p,s,a,i;
    cin>>t;
    for(int j=1;j<=t;j++)
    {
        cin>>n;
        for(int y=0;y<n;y++)
        {
            cin>>a;
            if(y==n/2)
            {
                s=a;
            }
        }
         cout<<"Case"<<" "<<j<<":"<<" "<<s<<endl;
    }

    return 0;
}
