#include <bits/stdc++.h>
using namespace std;
#define MAX 100000
vector <int> edges[MAX];
vector<int>path,dis,p;
 bool level[MAX];
int main() {
  int numNodes, numEdges ,s,a=0,b,c,d,e,f=0,g,i;

  scanf("%d%d", &numNodes, &numEdges);
     cin>>s>>d;
 // memset(level,false,sizeof(level));
  //cost.assign(numNode, false);
 // fill(level.begin(),level.end(),0);
 // level.assign(numNode.begin(), true , numNode.end());
  for ( i = 0; i <numEdges; i++) {
    int x, y;
    scanf("%d%d", & x, & y);
    edges[x].push_back(y);
  // edges[y].push_back(x);
  }
  for(i=0;i<numNodes;i++)
  {
      // path[i]=-1;
       //dis[i]=INT_MAX;
       level[i]=false;
       path.push_back(-1);
       dis.push_back(INT_MAX);
  }
  //queue<int>q;
  list<int>queue;
  level[s]=true;
  dis[s]=0;
   queue.push_back(s);
   cout<<queue.front()<<endl;
   while(!queue.empty())
   {
     a=queue.front();
    // cout<<"a = "<<a<<endl;
     queue.pop_front();
     for(i=0;i<edges[a].size(); i++)
     {
         //cout<<"sagor"<<endl;
         if(level[edges[a][i]]==false)
         {
            // cout<<"sagor"<<endl;
             queue.push_back(edges[a][i]);
             level[edges[a][i]]=true;
             path[edges[a][i]]=a;
             dis[edges[a][i]]=dis[a]+1;
            // cout<< path[edges[a][i]]<<endl;

         }
         if(dis[edges[a][i]]==d)
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
     cout<<p[i];
 }
 //cout<<dis[d];

  return 0;
}
