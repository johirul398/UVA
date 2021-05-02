#include<bits/stdc++.h>
using namespace std;
#define MAX 100000
vector<int>::iterator it;
vector<int>p;
string s[MAX];
map<string ,int>m;
int main()
{
   // freopen("398.txt","w",stdout);
    int a,b,c,d,e=0,f,g,h,i,j,k=0,l=0,n=0;
    string x,y;
    while(cin>>g)
    {
       if(n) cout<<endl;
        h=0;
        m.clear();
        p.clear();
        vector<int>edge[MAX];
        c=0;
        for(i=0;i<=g;i++)
        {
            cin>>x>>y;
            if(i==g)
            {
                k=m[x];
                l=m[y];
            }
            else
            {
            if(m.find(x)==m.end())
            {
                m[x]=++c;
            }
            if(m.find(y)==m.end())
            {
                m[y]=++c;
            }
            k=m[x];
            l=m[y];
            edge[k].push_back(l);
            edge[l].push_back(k);
            s[k]=x;
            s[l]=y;
            }
        }
       int dis[c+1]={},level[c+1]={},path[c+1]={};
       queue<int>q;
       dis[k]=0,level[k]=1;
       q.push(k);
       while(!q.empty())
       {
           a=q.front();
           q.pop();
           for(it=edge[a].begin();it!=edge[a].end();it++)
           {
               if(level[*it]==0)
               {
                   level[*it]=1;
                   dis[*it]=dis[a]+1;
                   path[*it]=a;
                   q.push(*it);
               }
               if(*it==l)
               {
                  h=1;
                  break;
               }
           }
           if(h==1)
           {
               break;
           }

       }
       p.push_back(l);
       while(path[l]!=0)
       {
           p.push_back(path[l]);
           l=path[l];
       }
       if(h==0)
       {
           cout<<"No route"<<endl;
       }
       else
       {
       for(i=p.size()-1;i>0;i--)
       {
           cout<<s[p[i]]<<" "<<s[p[i-1]]<<endl;
       }
       }
       n++;
    }

    return 0;
}
