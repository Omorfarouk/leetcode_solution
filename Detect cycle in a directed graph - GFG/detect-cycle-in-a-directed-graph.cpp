//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
  
  bool cycle(int s, vector<bool>&vis, vector<bool>&currVis, vector<int>adj[]){
      vis[s]=true;
      currVis[s]=true;
      for(auto x : adj[s]){
          if(!vis[x]){
              if(cycle(x,vis,currVis, adj))
                  return true;
              
          }
              else if(vis[x]==1 && currVis[x]==1){
                  return true;
              }
          }
          currVis[s]=false;
          return false;
      
  }
    bool isCyclic(int V, vector<int> adj[]) {
    vector<bool>vis(V, false), currVis(V, false);
    for(int i=0; i<V; i++){
       if (!vis[i]){
          if(cycle(i,vis,currVis,adj)){
              return true;
          }
        }
    }
    return false;
    }
};



// class Solution {
//   public:
//     // Function to detect cycle in a directed graph.
    
//     bool cycle(int s, vector<bool>&visited, vector<bool>&currVisited, vector<int> adj[]){
//         visited[s] = true;
//         currVisited[s] = true;
        
//         for(auto x: adj[s]){
//             if(!visited[x]){
//                 if(cycle(x, visited, currVisited, adj))
//                     return true;
//             }
//             else if(visited[x] == true && currVisited[x] == true){
//                 return true;
//             }
//         }
        
//         currVisited[s] = false;
//         return false;
//     }
    
//     bool isCyclic(int V, vector<int> adj[]) {
//         // code here
//         vector<bool>visited(V, false), currVisited(V, false);
//         for(int i=0; i<V; i++){
//             if(!visited[i]){
//                 if(cycle(i, visited, currVisited, adj))
//                     return true;
//             }
//         }
        
//         return false;
//     }
// };

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends