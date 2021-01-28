#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c=0,d,e,f,g,h,i,j,k,l,n,m,x;
    vector<int>s;
    while(cin>>g)
    {
        j=10000009,h=0,l=0;
    for(i=0;i<g;i++)
    {
        cin>>h;
        s.push_back(h);
    }
    sort(s.begin(),s.end());
    cin>>x;
    for(i=0;i<g;i++)
    {
    b=i+1,e=g-1,a=0,d=0,m=0,n=s[i];
    c=abs(x-n);
    if(n>c)
    {
        break;
    }
    while(b<=e)
    {
         a=(b+e)/2;
           if(c==s[a])
           {
               m=s[a];
              // cout<<c<<endl;
              // cout<<s[i-1]<<s[i]<<endl;
              c=1;
               break;
           }

        else if(c>s[a])
        {
          b=a+1;
        }
        else if(c<s[a])
        {
            e=a-1;
        }
      }
      if(c==1)
      {
          if((c-n)<j)
          {
              l=s[i];
              h=x-n;
              j=c-n;
          }

      }
    }
    cout<<"Peter should buy books whose prices are "<<l<<" and "<<h<<"."<<endl;
    cout<<endl;
    s.clear();
    }

    return 0;
}
