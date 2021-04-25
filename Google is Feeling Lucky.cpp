#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("k2.txt","w",stdout);
    int t,i,n,a,b,c=1,d,e,f;
    string s,s1,s3,s4,s2;
    vector<int>v;
    vector<string>x;
    cin>>t;
    while(t--)
    {
        cout<<"Case #"<<c++<<":"<<endl;
        e=0;
        for(i=0;i<10;i++)
        {
          cin>>s;
          cin>>a;
          v.push_back(a);
          x.push_back(s);
          e=max(e,a);
        }
        for(i=0;i<10;i++)
        {
            if(v[i]==e)
            {
                cout<<x[i]<<endl;
            }

        }

       v.clear();
       x.clear();
       s="";


    }

    return 0;
}
