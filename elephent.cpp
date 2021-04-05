#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum,b=0,c;
    cin>>n;
    if(n%5==0)
    {
        b=n/5;
        cout<<b<<endl;
    }
    else
    {
        b=n/5+1;
        cout<<b<<endl;
    }
    return 0;
}
