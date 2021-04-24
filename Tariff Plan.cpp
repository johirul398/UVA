#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,h,i,j,k=1;
    vector<int>v;
    cin>>e;
    while(e--)
    {
        a=0,b=0,c=0,d=0;
        cin>>g;
        for(i=0;i<g;i++)
        {
            cin>>h;
            v.push_back(h);
        }
        for(i=0;i<g;i++)
        {
            a=v[i]/30+1;
            b+=a*10;
            c=v[i]/60+1;
            d+=c*15;
        }
        if(b<d)
        {
            cout<<"Case "<<k++<<": Mile "<<b<<endl;
        }
        else if(b>d)
        {
          cout<<"Case "<<k++<<": Juice "<<d<<endl;
        }
        else
        {
             cout<<"Case "<<k++<<": Mile Juice "<<b<<endl;
        }
        v.clear();
    }

    return 0;
}
