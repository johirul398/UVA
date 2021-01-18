#include<bits/stdc++.h>
using namespace std;
#define MAX 100000
vector<int>::iterator it;
map<string ,int>m;
string s[MAX];
string s1;
void sagor(vector<int> edge[],string x,string y,int t)
{
    int z=0,h=0,a,j=0;
            z=m[x];
            h=m[y];
       int dis[t+1]={},level[t+1]={},path[t+1]={};
       queue<int>q;
       dis[z]=0,level[z]=1;
       q.push(z);
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
           }
       }
       vector<int>p;
       p.clear();
       p.push_back(h);
       while(path[h]!=0)
       {
           p.push_back(path[h]);
           h=path[h];
       }

       for(int i=p.size()-1;i>=0;i--,j=0)
       {
          s1=s[p[i]];
         cout<<s1[j];
       }
       cout<<endl;
      // p.clear();
}
int main()
{
   // freopen("398.txt","w",stdout);
    int a,b,c,d,e=0,f,g,i,j,n=0,x1,y1,k=0,l=0;
    string x2,y2,x3,y3;
    cin>>g;
    while(g--)
    {
        if(n) cout<<endl;
        m.clear();
        vector<int>edge[MAX];
        c=0;
        cin>>x1>>y1;
        for(i=0;i<x1;i++)
        {
            cin>>x2>>y2;
            if(m.find(x2)==m.end())
            {
                m[x2]=++c;
            }
            if(m.find(y2)==m.end())
            {
                m[y2]=++c;
            }
            k=m[x2];
            l=m[y2];
            edge[k].push_back(l);
            edge[l].push_back(k);
            s[k]=x2;
            s[l]=y2;
        }
        for(i=0;i<y1;i++)
        {
            cin>>x3>>y3;
           sagor(edge,x3,y3,c);
       }
       n++;

    }

    return 0;
}
