#include<bits/stdc++.h>
using namespace std;
#define MAX 100
vector<int>edge[MAX];
//bool level[MAX];
vector<bool>level;
vector<int>dis;
//int dis[MAX];
bool lev[MAX];
int di[MAX];
vector<int>::iterator it;
int main()
{
    level.clear();
    dis.clear();

    int a,b,c,d,e,f,g,h,i,j,k=0,l,m,n,x,y,s;
    while(cin>>s)
    {
       /* memset(edge,NULL,sizeof(edge));
        memset(level,false,sizeof(level));
        memset(dis,INT_MAX,sizeof(dis));
        memset(lev,false,sizeof(level));
        memset(di,INT_MAX,sizeof(dis));*/
        if(s==0)
        {
            break;
        }
        for(i=0;i<s;i++)
        {
            cin>>x>>y;
            edge[x].push_back(y);
            edge[y].push_back(x);
        }
        while( cin>>a>>d)
        {
            cin>>h;
                if(h==2)
                {

            if(a==0&&d==0)
            {
                break;
            }
            //  vector<bool>level;
            // vector<int>dis;
           // int level[50]={},dis[50]={};
           // k=0;
             // vector<int>::iterator it ;
            for(i=0;i<s;i++)
            {
               // level[i]=false;

               level.push_back(false);
               // dis[i]=INT_MAX;
               dis.push_back(INT_MAX);
            }
             queue<int>q;
            dis[a]=0;
            level[a]=true;
            q.push(a);
            while(!q.empty())
            {


                b=q.front();
                cout<<"b = "<<
                if(dis[b]>d)
                {
                    break;
                }
                k++;
                q.pop();
                for( it = edge[b].begin();it!=edge[b].end();it++)
                {
                   // c++;
                   // dis[*it]=dis[b]+1;
                    if(level[*it]==false )
                    {
                        q.push(*it);
                       level[*it]=true;
                       dis[*it] =dis[b]+1;
                      // k--;
                    }
                }

            }
            cout<<"k = "<<k<<endl;
            k=0;
            dis.clear();
            level.clear();
                }
            else
                {

            if(a==0&&d==0)
            {
                break;
            }
            //  vector<bool>level;
            // vector<int>dis;
           // int level[50]={},dis[50]={};
           // k=0;
             // vector<int>::iterator it ;
            for(i=0;i<s;i++)
            {
                lev[i]=false;
                di[i]=INT_MAX;
            }
             queue<int>q;
            di[a]=0;
            lev[a]=1;
            q.push(a);
            while(!q.empty())
            {


                b=q.front();
                if(di[b]>d)
                {
                    break;
                }
                k++;
                q.pop();
                for( it = edge[b].begin();it!=edge[b].end();it++)
                {
                   // c++;
                   // dis[*it]=dis[b]+1;
                    if(lev[*it]==false )
                    {
                        q.push(*it);
                       lev[*it]=true;
                       di[*it] =di[b]+1;
                      // k--;
                    }
                }

            }
            cout<<"k = "<<k<<endl;
            k=0;
                }

           // dis.clear();
           // level.clear();
            }

      //  dis.clear();
    }
    return 0;
}
