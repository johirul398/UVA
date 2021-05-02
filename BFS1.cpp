#include <bits/stdc++.h>
using namespace std;
#define MAX 100000
vector <int> edges[MAX];
vector<int>path,dis,p;
 bool level[MAX];
int main() {
  int n, e ,s,a=0,b,c,d,f=0,g,i;

     cin>>n>>e>>s>>d;

  for ( i = 0; i <e; i++) {
    int x, y;
    scanf("%d%d", & x, & y);
    edges[x].push_back(y);
   edges[y].push_back(x);
  }
  for(i=0;i<e;i++)
  {
       level[i]=false;
       path.push_back(-1);
       dis.push_back(INT_MAX);
  }
  queue<int>q;
 vector<int>::iterator it;
  level[s]=true;
  dis[s]=0;
   q.push(s);
   while(!q.empty())
   {
     a=q.front();
     q.pop();
     for(it=edges[a].begin();it!=edges[a].end(); it++)
     {
         if(level[*it]==false)
         {
             q.push(*it);
             level[*it]=true;
             path[*it]=a;
             dis[*it]=dis[a]+1;
            // cout<< path[edges[a][i]]<<endl;

         }
         if(dis[*it]==d)
         {
            f=1;
            break;
         }
     }
     if(f==1)
     {
        // cout<<"sagor"<<endl;
         break;
     }

    // cout<<"level "<<level[a]<<endl;
   }
   int z=d;
   p.push_back(z);

 while(path[z]!= -1)
 {
     p.push_back(path[z]);
     z=path[z];
 }
  cout<<"path ";
 for(i=p.size()-1;i>=0;i--)
 {
     cout<<p[i]<<" ";
 }
 cout<<endl;
 cout<<"distance "<<dis[d];

  return 0;
}
