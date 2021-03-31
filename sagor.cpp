#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,j,k,l;
    string a,b;
    cin>>a>>b;
    //for(i=0;i<a.size();i++)
    while(a[i]!=0)
    {
        if(a[i]<92)
        {
            a[i]+=32;
        }
        if(b[i]<92)
        {
            b[i]+=32;
        }
        i++;
    }
    if(a<b)
    {
        cout<<-1<<endl;
    }
   else if(a>b)
    {
        cout<<1<<endl;
    }
     if(a==b)
    {
        cout<<0<<endl;
    }
    return 0;
}
