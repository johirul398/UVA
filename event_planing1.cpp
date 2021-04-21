#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("a.txt","w",stdout);
  long long  int i,j,a,b,c,d,e,f,g,x,p,h,w,k;
    int ch[1001];
    int ch1[1001];
    while(cin>>p>>b>>h>>w)
    {
        g=0;
        f=b+1000;
        for(i=0;i<h;i++)
        {
            cin>>a;
            for( j=0;j<w;j++)
            {
                cin>>d;
                if(d>=p)
                {
                    g=p*a;
                    if(g<=f)
                    {
                        f=g;
                    }
                }
            }

        }
             if(f>=b)
            {
                cout<<"stay home"<<endl;
            }
            else
            {
                cout<<f<<endl;
            }
        }

    return 0;
}
