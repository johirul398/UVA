#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,n,s,x;
    cin>>x;
    while(x--)
    {
        cin>>n;
        s=0;
        b=1;
        c=0;
        while(n--)
        {
            cin>>a;
            if(a==0)
            {
                c++;
            }
                s+=a;
        }
        cout<<(s+c==0)+c<<endl;

    }
    return 0;
}
