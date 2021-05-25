#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,b,a,c,d,g,f=0;
    cin>>t>>b;
    vector<int>v;
    for(int i=0;i<t;i++)
    {
        cin>>a;
        if(a==1)
        {
            f++;
        }
        v.push_back(a);
    }
       while(b--)
      {

          cin>>c>>d;
          d--;
          if(c==1)
          {
              if(v[d]==1)
              {
                  v[d]=0;
                  f--;
              }
              else
              {
                  v[d]=1;
                  f++;
              }

          }
          else
          {
              if(d<f) cout<<1<<endl;
              else cout<<0<<endl;
          }
      }

    return 0;
}
