#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("sa.txt","w",stdout);
    int a,b,c=1,d,e,g,j,i;
    while(cin>>a, a>=0)
    {
       int a1[20];
        for(i=0;i<12;i++)
        {
            cin>>a1[i];
        }
        int r[20];
        for(i=0;i<12;i++)
        {
            cin>>r[i];
        }
        cout<<"Case "<<c++<<":"<<endl;
        for(i=0;i<12;i++)
        {
            if(r[i]>a)
            {
                cout<<"No problem. :("<<endl;
            }
            else
            {
                 cout<<"No problem! :D"<<endl;
                 a=a-r[i];
            }
            a=a+a1[i];
        }

    }
    return 0;
}
