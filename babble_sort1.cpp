#include<bits/stdc++.h>
using namespace std;
typedef long long  int ll;
int main()
{
   // freopen("sa.txt","w",stdout);

  ll c,j=1,k=0,d,sum=0;;
    cin>>c;
    while(c--)
    {
        cin>>d;
        k=d*(d-1)/2;
        if(k%2==0)
        {
             cout<<"Case "<<j<<": "<<k/2<<endl;
           // cout<<"Case "<<j<<": "<<k<<"/2"<<endl;
        }
        else
        {
            //cout<<"Case "<<j<<": "<<k/2<<endl;
            cout<<"Case "<<j<<": "<<k<<"/2"<<endl;
        }
        j++;
    }
    return 0;
}

