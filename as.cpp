#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,f,i,j,e;
    string s,x,s1,x1;
    cin>>e;
    while(e--)
    {
        cin>>s>>x;
        a=s.size();
        b=x.size();
        if(a%2==0&&b%2==0)
        {
            if(a>b)
            {
                //c=a-b;
                c=a/2;
                for(i=0;i<c;i++)
                {
                    x1+=x;
                }
                if(x1==s)
                {
                    cout<<x1<<endl;
                }
                else
                {
                    cout<<-1<<endl;
                }
               // cout<<x1<<endl;
            }
            else
            {
                c=b/2;
                for(i=0;i<c;i++)
                {
                    s1+=s;
                }
                if(s1==x)
                {
                    cout<<s1<<endl;
                }
                else
                {
                    cout<<-1<<endl;
                }
               // cout<<s1<<endl;
            }

        }
        else
        {
            for(i=0;i<b;i++)
            {
                x1+=s;
            }
            int z;
            z=x1.size();
            c=z/b;
            for(i=0;i<c;i++)
            {
                s1+=x;
            }
            if(x1==s1)
            {
                cout<<x1<<endl;
            }
            else
            {
                cout<<-1<<endl;
            }
        }
        x1="";
        s1="";
        c=0,a=0,b=0;

    }

    return 0;
}
