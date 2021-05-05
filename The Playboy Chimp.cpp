#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l,n,m,x,y;
    vector<int>s,s1;
    while(cin>>g)
    {
    for(i=0;i<g;i++)
    {
        cin>>h;
        s.push_back(h);
    }
    cin>>x;
    for(i=0;i<x;i++)
    {
        cin>>h;
        s1.push_back(h);
    }
    for(i=0;i<x;i++)
    {
        k=2;
    while(k--)
    {
     if(k==1)
     {
        b=0,e=g-1,a=0,c=0,d=0,m=0;
    while(b<=e)
    {

        a=(b+e)/2;

        if(s1[i]==s[a])
        {
          m=s[a];
          e=a-1;
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
    if((b-1)<0)
    {
        cout<<"X";
    }
    else
    {
         cout<<s[b-1];
    }
    cout<<" ";

     }
     else if(k==0)
     {
    b=0,e=g-1,a=0,c=0,d=0,m=0;
    while(b<=e)
    {
        a=(b+e)/2;
        if(s1[i]==s[a])
        {
          m=s[a];
          b=a+1;
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
    if(b>(g-1))
    {
        cout<<"X";
    }
    else
    {
       cout<<s[b];
    }
    cout<<endl;

      }
    }
}
     s.clear();
     s1.clear();

}

    return 0;
}
