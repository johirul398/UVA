#include<bits/stdc++.h>
using namespace std;
struct edge{
    int u,v,w;
};
bool com(const edge &t1,const edge &t2)
{
    return t1.w<t2.w;
}
int findd(const vector<int> &p,int t)
{
    return (p[t]==t)? t : findd(p,p[t]);
}
int main()
{
    int n,e;
    while(cin>>n>>e)
    {
        if(n==0&&e==0)break;
        vector<edge>vec;
        vector<int>p(n);
        for(int i=0;i<e;i++)
        {
            edge val;
            cin>>val.u>>val.v>>val.w;
            vec.push_back(val);

        }
        sort(vec.begin(),vec.end(),com);
        for(int i=0;i<n;i++)
        {
            p[i]=i;
        }
        int a=0,s=0,b=(int)vec.size();
        vector<int>x;
        for(int i=0;i<b && s<=n-1;i++)
        {
            int a1=findd(p,vec[i].u);
            int b1=findd(p,vec[i].v);
            if(a1!=b1)
            {
                p[a1]=b1;
                ++s;
            }
            if(a1==b1)
            {

                x.push_back(vec[i].w);
            }

        }
        sort(x.begin(),x.end());
        int k=x.size();
        if(k==0)
        {
            cout<<"forest"<<endl;
        }
        else
        {
        cout<<x[0];
        for(int i=1;i<k;i++)
        {
            cout<<" "<<x[i];
        }
        cout<<endl;
        }
    }
    return 0;
}
