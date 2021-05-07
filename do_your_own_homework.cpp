#include <bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("input.txt","w",stdout);
     int a,b,c,d,e=0,f=0,g=0,i,j=1,l,m=0,n;
      bool flag = true;
      string y,x;
    map<string, int> s;
    vector<int> sa;
    cin>>a;
    while(a--)
    {
        cin>>b;
        for(i=0;i<b;i++)
        {
            cin>>x;
            cin>>c;
            s[x]=c;
        }
        cin>>d;
        cin>>y;
        if(s.count(y)!=0)
        {
            if(s[y]<=d)
            {
                cout<<"Case "<<j<<": Yesss"<<endl;
            }
            else if(s[y]<=d+5)
            {
                 cout<<"Case "<<j<<": Late"<<endl;
            }
            else
            {
                 cout<<"Case "<<j<<": Do your own homework!"<<endl;
            }
        }
        else
        {
             cout<<"Case "<<j<<": Do your own homework!"<<endl;
        }
        j++;
        s.clear();


    }

    return 0;
}
