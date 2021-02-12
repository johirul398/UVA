#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,k,a;
    cin>>s;
    while(s--)
    {
        cin>>a>>k;
        if(a>=k)
        {
           if(a%k==0)cout<<1<<endl;
           else cout<<2<<endl;
        }
        else
        {
            if(k%a==0)cout<<k/a<<endl;
            else cout<<k/a+1<<endl;
        }
    }

    return 0;
}
