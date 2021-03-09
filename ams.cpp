#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,s[20000],c,v,b,n,m,g,j,i,l,t[1000];
    cin>>v;
    while(v--)
    {
        m=0,n=0,l=0;
        cin>>a>>b;
        for(i=0;i<a;i++)
        {
            cin>>s[i];
        }
        for(i=0;i<a;i++)
        {
            if(s[i]%2!=0)
            {
                t[n]=s[i];
                n++;
               // l=l+s[i];
            }
           m=m+s[i];
        }
        for(i=0;i<n;i++)
        {
            l=l+t[i];
        }
        if(b==1)
        {
            if(m%2!=0)
            {
                cout<<"No"<<endl;
            }
            else
            {
                cout<<"Yes"<<endl;
            }
        }
        else if(n<=b)
        {
            if(l%2!=0)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
       else if(b==n)
        {
            if(l%2!=0)
            {
                 cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
       else if(m%2!=0)
        {
                cout<<"Yes"<<endl;
        }
       else
        {
              cout<<"No"<<endl;

        }
    }
    return 0;
}
