#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,b,a,c,d;
    cin>>t>>b;
    vector<int>v;
    for(int i=0;i<t;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end(),greater<int>());

       while(b--)
      {

          cin>>c>>d;
          if(c==1)
          {
              v[d-1]=1-v[d-1];
             // sort(v.begin(),v.end(),greater<int>());
          }
          else
          {
              if(v[d-1]==1)
                {
                    sort(v.begin(),v.end(),greater<int>());
                }
                cout<<v[d-1]<<endl;
          }
      }

    return 0;
}
