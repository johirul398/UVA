#include <bits/stdc++.h>
using namespace std;
int main()
{
  //
  freopen("input.txt","w",stdout);
     int a,b,c,d,e=0,f=0,g=0,i,j,l,m=0,n;
      bool flag = true;
    map<int, int> s;
    vector<int> sa;
    vector<int>w;
    cin>>a;
    while(a--)
    {
        f=0;
        cin>>b;
        for(i=0;i<b;i++)
        {
            cin>>c;
            w.push_back(c);
        }
        for(i=b-1;i>=0;i--)
        {
           // cout<<w[i]<<endl;

         /* if(w[i]==w[i-1])
          {
              continue;
          }*/
          if(s.count(w[i]) == 0)
            {
                s[w[i]] = 1;
                f++;
            }
            else
            {
                s[w[i]] = s[w[i]] + 1;
                sa.push_back(f);
                s.clear();
                s[w[i]]=1;
               // cout<<"sagor :"<<f<<endl;
                f=1;
            }
        }
        sa.push_back(f);
        m=-99999999;
        for(i=0;i<sa.size();i++)
        {
            if(sa[i]>m)
            {
                m=sa[i];
            }
        }
       cout<<m<<endl;
      s.clear();
      sa.clear();
      w.clear();

    }

    return 0;
}
