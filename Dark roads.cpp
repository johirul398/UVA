 #include<bits/stdc++.h>
using namespace std;
struct edge{
    int u,v1,w;
};
 bool com (const edge &t ,const edge &t1)
    {
        return t.w<t1.w;
    }
int findd(const vector<int> &p, int t)
{
    return (p[t]==t)? t : findd(p,p[t]);
}
int main()
{
    int e,n;
    while(cin>>n>>e)
    {
        if(n==0&&e==0) break;
        int s=0;
        vector<edge>v;
        vector<int>p(n);
        for(int i=0;i<e;i++)
        {
          edge val;
          cin>>val.u>>val.v1>>val.w;
          s+=val.w;
          v.push_back(val);
        }
        sort(v.begin(),v.end(),com);
        for(int i=0;i<n;i++)
        {
            p[i]=i;
        }
        //c=(int)v.size();
      int  d=0,f=0;
        for(size_t i=0;i<v.size() &&f<n-1;i++)
        {
            edge &ed=v[i];
           int a=findd(p,ed.u);
           int b=findd(p,ed.v1);
            if(a!=b)
            {
                p[b]=a;
                d+=ed.w;
                ++f;
            }
        }
        cout<<s-d<<endl;

    }
    return 0;
}
