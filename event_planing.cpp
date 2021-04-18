#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("a.txt","w",stdout);
    int i,a,b,c,d,e,f,g,x,p,h,w,k;
    int ch[1001];
    while(cin>>p>>b>>h>>w)
    {
        g=0;
       // x=0;
        c=0;
        k=0;
        for(i=0;i<h;i++)
        {
            cin>>a;
            g=a*p;
            ch[i]=g;
            if(g>=b)
            {
              c=1;
            }
            x=0;
            for(int j=0;j<w;j++)
            {
                cin>>d;
                if(d<p)
                {
                    k++;
                    x=1;
                    break;
                }
            }
        }
        cout<<c<<x<<endl;
        if(c==1||x==h)
            {
                cout<<"stay home"<<endl;
            }
            else
            {
                e=-99999;
                for(int o=0;o<i;o++)
                {
                   if(ch[o]>e)
                    {
                        e=ch[o];
                    }
                 // cout<<ch[o]<<endl;
                }
                cout<<e<<endl;

            }
    }
    return 0;
}
