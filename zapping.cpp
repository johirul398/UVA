#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,x;
    while(cin>>a>>b)
    {
        if(a==-1&&b==-1)
        {
            break;
        }
        if(a>b)
        {
            c=a-b;
            d=b+100-a;
        }
        else
        {
            c=b-a;
            d=a+100-b;
        }
        cout<<min(c,d)<<endl;
    }
    return 0;
}
