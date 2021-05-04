#include<bits/stdc++.h>
using namespace std;
#define MAX 100
vector<bool>level;
vector<int>dis;
//int level[MAX];
//bool dis[MAX];
int main()
{
     level.clear();
     dis.clear();
    int a,b,c,d,e,f,g,h,i,j,k=0,l,n=1,x,y,s;
    while(cin>>s)
    {
        if(s==0)
        {
            break;
        }
        vector<int>edge[MAX];
        map<int,int>m;
        m.clear();
        f=0;
        for(i=0;i<s;i++)
        {
            cin>>x>>y;
            c=m[x];
            if(c==0)
            {
                m[x]=++f;
                c=f;
            }
            d=m[y];
            if(d==0)
            {
                m[y]=++f;
                d=f;
            }
            edge[c].push_back(d);
            edge[d].push_back(c);
        }
        while( cin>>a>>d)
        {
            if(a==0&&d==0)
            {
                break;
            }
            g=a;
              a=m[a];
            for(i=0;i<40;i++)
            {
               level.push_back(false);
               dis.push_back(INT_MAX);
            }
             queue<int>q;
            dis[a]=0;
            level[a]=true;
            q.push(a);
            while(!q.empty())
            {
                b=q.front();
                 //q.pop();
               if(dis[b]>d)
                {
                    break;
                }
                q.pop();
                k++;
               // cout<<" "<<b<<endl;
                for(vector<int>::iterator it = edge[b].begin(); it!=edge[b].end();it++)
                {
                    if(level[*it]==false )
                    {
                        q.push(*it);
                       level[*it]=true;
                       dis[*it] =dis[b]+1;
                    }
                }

            }
           // cout<<"Case "<<n++<<": "<<f-k<<" nodes not reachable from node "<<g<<" with TTL = "<<d<<"."<<endl;
             printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n", n++, f-k, g, d);
            k=0;
            dis.clear();
            level.clear();
                }
                //cout<<endl;

    }
    return 0;
}
