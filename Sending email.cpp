    #include <bits/stdc++.h>
    using namespace std;
  //  #define infinity 1<<30
   #define infinity INT_MAX
    int numEdges;
    struct node{
        int u;
        int cost;
        node(int _u, int _cost){
            u = _u;
            cost = _cost;
        }
        bool operator < ( const node& p ) const {

                        return cost > p.cost;
                   }

    };
    int dijstkra(int x,int y, vector<int>g[], vector<int>cost[]){

        int distance[numEdges+1];
        for(int i=0;i<=numEdges;i++) {
            distance[i] = infinity;
           // path[i]=-1;
        }

        priority_queue<node>q;
        q.push(node(x,0));
        distance[x] = 0;

        while(!q.empty()){
            node top = q.top();
            q.pop();
            int u=top.u;

            for(int i=0;i<(int)g[u].size();i++){
                int v=g[u][i];
                if(distance[u] + cost[u][i] < distance[v]){
                    distance[v] = distance[u] + cost[u][i];
                    q.push(node(v, distance[v]));
                }
            }
        }

       int z=distance[y];
       return z;
    }

    int main(){
         int numNodes,t,a,b,c=1,i;
         int source,dis;
         cin>>t;
         while(t--)
         {
        cin>>numNodes>>numEdges>>source>>dis;
         vector<int>g[numEdges+1], cost[numEdges+1];
        for(i=1;i<=numEdges;i++){
            int u, v, w;
            cin>>u>>v>>w;
            g[u].push_back(v);
            g[v].push_back(u);
            cost[u].push_back(w);
            cost[v].push_back(w);
        }

       a = dijstkra(source, dis,g, cost);
       if(numEdges==0||a==infinity)
       {
               cout<<"Case #"<<c++<<": unreachable"<<endl;
       }
       else
       {
            cout<<"Case #"<<c++<<": "<<a<<endl;
       }
         }

        return 0;
    }
