#include <bits/stdc++.h>
#include <vector>
using namespace std;

#define MAX 100000 //maximum node
vector <int> edges[MAX];
vector <int> cost[MAX]; //parallel vector to store costs;
 int sa(int t)
 {
     return edges[t].size();
 }
int main() {
  int numNodes, numEdges ,s,g=0;

  scanf("%d%d", &numNodes, &numEdges);
  for (int i = 1; i <= numEdges; i++) {
    int x, y;
    scanf("%d%d", & x, & y);
    edges[x].push_back(y);
   // edges[y].push_back(x);
    cost[y].push_back(x);
   // cost[y].push_back(1);
  }
    // s=edges[1].size();
    // cout<<"sa"<<edges[3][0]<<endl;

     for(int i=1; i <= numNodes ; i++)
     {
         s=sa(i);
        cout<<"list of connected node "<<i<<"= ";
         for(int j=0;j<s;j++)
         {
              printf("%d ",edges[i][j]);
              g=1;

         }
         if(g==0)
         {
             cout<<0;
         }
         g=0;
        printf("\n");
     }
     for(int i=1; i <= numNodes ; i++)
     {
         cout<<"indegree "<<cost[i].size()<<endl;
          cout<<"outdegree "<<edges[i].size()<<endl;

     }
  return 0;
}
