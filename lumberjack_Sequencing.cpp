#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,m,n,o[100],p,a,c,b,l=-9999,k=9999;
    cin>>a;
    cout<<"Lumberjacks:"<<endl;
    while(a--)
    {
        o[100];
        l=0;
        c=1;
        m=0;
        for(i=0;i<10;i++)
        {
            cin>>b;
            o[i]=b;
        }
        for(i=0;i<10;i++)
        {
           if(l>o[i])
            {
                l=o[i];
                c++;
            }
          else if(l<o[i])
            {
                l=o[i];
                m++;
            }
        }
       // cout<<c<<" "<<m<<endl;
        if(c==10||m==10)
        {
            cout<<"Ordered"<<endl;
        }
        else
            {
            cout<<"Unordered"<<endl;
          }
    }
    return 0;
}
