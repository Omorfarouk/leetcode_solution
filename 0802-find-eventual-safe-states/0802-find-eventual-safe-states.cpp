class Solution {
public:
    
    bool cycle(int s, vector<bool>&vis, vector<bool>&currVis, vector<vector<int>>& graph, vector<bool>& present_cycle){
        vis[s]=true;
        currVis[s]=true;
        for(auto x: graph[s]){
            if(!vis[x]){
                if(cycle(x,vis,currVis,graph,present_cycle))
                    return present_cycle[s]=true;
            }
            else if(vis[x]==true && currVis[x]==true){
                return present_cycle[s]=true;
            }
        }
        
        currVis[s]=false;
         return false;
    }
    
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int V=graph.size();
        vector<bool>vis(V, false), currVis(V,false);
        vector<bool>present_cycle(V,false);
        for(int i=0; i<V; i++){
            if(!vis[i]){
                cycle(i,vis,currVis,graph,present_cycle);
                   
                }
            }
        
        
        vector<int>ans;
        for(int i=0; i<V; i++){
            if(!present_cycle[i]){
                ans.push_back(i);
            }
        }
        return ans;
    }
};