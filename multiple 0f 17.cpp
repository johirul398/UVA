#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,h,i,j;
    string s;
    while(cin>>s)
    {
        if(s=="0")
        {
            break;
        }
        a=s.size();
        b=0;
        for(i=0;i<a;i++)
        {
            b=b*10+s[i]-'0';
             b=b%17;

        }
        if(b==0)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
    return 0;
}
