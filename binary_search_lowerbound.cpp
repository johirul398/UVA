#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l,n,m;
    vector<int>s;
    while(cin>>g>>n)
    {
    for(i=0;i<g;i++)
    {
        cin>>h;
        s.push_back(h);
    }
    sort(s.begin(),s.end());
    b=0,e=g-1,a=0,c=0,d=0,m=0;
    while(b<=e)
    {
        a=(b+e)/2;
        if(n==s[a])
        {
          m=s[a] ;
          e=a-1;
        }
        else if(n<s[a])
        {
          e=a-1;
        }
        else if(n>s[a])
        {
            b=a+1;
        }
    }
    if(b-1<0||b-1>(g-1))
    {
        cout<<"X";
    }
    else

    {
         cout<<" "<<s[b-1]<<endl;
    }
    s.clear();
    }

    return 0;
}
