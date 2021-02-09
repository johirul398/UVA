#include<bits/stdc++.h>
using namespace std;
struct edge{
    int u,v1,w;
    bool operator <(const edge& t ) const
    {
        return w<t.w;
    }
};
vector<edge>v;
int p[500000];
int findd(int t)
{
    return (p[t]==t)? t : findd(p[t]);
}
int main()
{
    int a,b,c,d,e,f,s,u,v1,w,i,n,j;
    while(cin>>n>>e)
    {
        s=0;
        if(n==0&&e==0) break;
        edge val;
        for(i=0;i<e;i++)
        {
          cin>>u>>v1>>w;
          val.u=u;
          val.v1=v1;
          val.w=w;
          v.push_back(val);
        }
        for(i=0;i<n;i++)
        {
            p[i]=i;
        }
        sort(v.begin(),v.end());
        c=(int)v.size();
        d=0,f=0;
        for(i=0;i<c;i++)
        {
            a=findd(v[i].u);
            b=findd(v[i].v1);
            if(a!=b)
            {
                p[a]=b;
                d+=v[i].w;
                f++;
            }
            if(f==n-1)
            {
                break;
            }
        }
        cout<<d<<endl;
        v.clear();
    }
    return 0;
}
