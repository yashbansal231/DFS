  #include <iostream>
   #include <vector>
    using namespace std;
int p=1;
    void dfs(int s,bool visited[],vector <int> adj[]) {
        visited[s] = true;
        for(int i = 0;i < adj[s].size();++i)    {
         if(visited[adj[s][i]] == false)
             {dfs(adj[s][i],visited,adj);
                 p++;
             }
        }
    }
    int main() {
        int nodes, edges, x, y, connectedComponents = 0;
        cin >> nodes;                       //Number of nodes
        cin >> edges;
        vector <int> adj[nodes+1];
    bool visited[nodes+1];//Number of edges
        for(int i = 0;i < edges;++i) {
         cin >> x >> y;     
     //Undirected Graph 
         adj[x].push_back(y);                   //Edge from vertex x to vertex y
         adj[y].push_back(x);                   //Edge from vertex y to vertex x
        }

        for(int i = 0;i <= nodes;++i)
         visited[i] = false;                           //Initialize all nodes as not visited

         int a;
         cin>>a;
         if(visited[a] == false)     {
             dfs(a,visited,adj);
         }
        
        cout<<nodes-p<< endl;
        return 0;
    }
