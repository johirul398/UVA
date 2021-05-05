#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,h,i,j=1,k,l,n,m,x,y;
    vector<int>s,s1;
    while(cin>>g>>x)
    {
        if(g==0&&x==0)
        {
            break;
        }

    for(i=0;i<g;i++)
    {
        cin>>h;
        s.push_back(h);
    }
    for(i=0;i<x;i++)
    {
        cin>>h;
        s1.push_back(h);
    }
    sort(s.begin(),s.end());
    cout<<"CASE# "<<j++<<":"<<endl;
    for(i=0;i<x;i++)
    {

    b=0,e=g-1,a=0,c=0,d=0,m=0;
    while(b<=e)
    {

        a=(b+e)/2;

        if(s1[i]==s[a])
        {
            c=1;
          m=s[a];
          e=a-1;
         // break;
        }
        else if(s1[i]<s[a])
        {
          e=a-1;
        }
        else if(s1[i]>s[a])
        {
            b=a+1;
        }
    }
    if(c==0)
    {
        cout<<s1[i]<<" not found"<<endl;;
    }
    else
    {
        cout<<s1[i]<<" found at "<<b+1<<endl;
    }

     }
     s.clear();
     s1.clear();

}

    return 0;
}
