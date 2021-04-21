#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,a,b=-99999,x,z,d=0;
    cin>>k;
    for(i=1;i<=k;i++)
    {
        b=-99999;
        cin>>j;
        for(l=0;l<j;l++)
        {
            cin>>x;
            if(x>b)
            {
                b=x;
            }
        }
        cout<<"Case "<<i<<": "<<b<<endl;
       /* for(z=0;z<j;z++)
        {
            if()
        }*/

    }
    return 0;
}
