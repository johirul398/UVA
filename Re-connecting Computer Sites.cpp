#include<bits/stdc++.h>
using namespace std;
struct edge{
    int u,v,w;
};
bool com (const edge &t1,const edge &t2 )
{
    return t1.w<t2.w;
}
int findd(vector<int> const &p,int t)
{
    return (p[t]==t)? t : findd(p,p[t]);
}
int main()
{
    int n,e=0;
    while(cin>>n)
    {
        vector<edge>sec;
        vector<int>p(n);
        int sum=0;
        for(int i=0;i<n-1;i++)
        {
            edge val;

            cin>>val.u>>val.v>>val.w;
            sum+=val.w;
        }
        if(e)cout<<endl;
        cout<<sum<<endl;
        int c;
        cin>>c;
       for(int i=0;i<c;i++)
        {
            edge val;

            cin>>val.u>>val.v>>val.w;
            sec.push_back(val);
        }
        int a;
        cin>>a;
       for(int i=0;i<a;i++)
        {
            edge val;

            cin>>val.u>>val.v>>val.w;
            sec.push_back(val);
        }
       sort(sec.begin(),sec.end(),com);

        for(int i=1;i<=n;i++)
        {

           p[i]=i;
        }
        int s1=0,f=0;
        int x1=(int)sec.size();

        for(int i=0;i<x1 && s1<n-1;++i)
        {

              int a2=findd(p,sec[i].u);
              int b2=findd(p,sec[i].v);
              if(a2!=b2)
               {
                 p[a2]=b2;
                 f+=sec[i].w;
                 ++s1;
               }
        }

        cout<<f<<endl;
        e++;

    }
    return 0;
}
