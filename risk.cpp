#include<bits/stdc++.h>
using namespace std;
#define MAX 25
vector<int>::iterator it;
void sagor(vector<int> edge[],int x,int y)
{
    int h=0, a;
       int dis[21]={},level[21]={};
       queue<int>q;
       dis[x]=0,level[x]=1;
       q.push(x);
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
                   q.push(*it);
               }
               if(*it==y)
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
      // cout<<"  "<<x<<" to "<<y<<": "<<dis[y]<<endl;
      printf("%2d to %2d: %d\n", x, y, dis[y]);
}
int main()
{
    //freopen("398.txt","w",stdout);
    int a,b,c,d,e=0,f,g,i,j,n=0,x1,y1,k=0,l=0;
    int x2,y2,x3,y3;

    while(cin>>g)
    {
        vector<int>edge[MAX];
        for(i=0;i<g;i++)
        {
            cin>>f;
            edge[1].push_back(f);
            edge[f].push_back(1);
        }

        for(i=2;i<=19;i++)
        {
            cin>>x2;
            for(j=0;j<x2;j++)
            {
                cin>>y2;
                 edge[i].push_back(y2);
                 edge[y2].push_back(i);
            }

        }
        cin>>y1;
        cout<<"Test Set #"<<++n<<endl;
        for(i=0;i<y1;i++)
        {
            cin>>x3>>y3;
           sagor(edge,x3,y3);
       }
      cout<<endl;

    }

    return 0;
}
