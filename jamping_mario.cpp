#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,x,k,l,a=1,d=0,f,h[1000];
    cin>>k;
    for(i=1;i<=k;i++)
    {
        d=0;
        f=0;
        cin>>j;
          for(l=0;l<j;l++)
        {
            cin>>x;
            h[l]=x;
        }
         if(j==1)
        {
            cout<<"Case "<<i<<": "<<d<<" "<<f<<endl;
            //cout<<d<<f<<endl;
        }
        else
        {
        for(int t=0;t<j-1;t++)
        {
            if(h[t]<h[t+1])
            {
               // b=x;
                d++;
            }
           else if(h[t]>h[t+1])
            {
              f++;
            }
        }
       cout<<"Case "<<i<<": "<<d<<" "<<f<<endl;

        }
    }
    return 0;
}
