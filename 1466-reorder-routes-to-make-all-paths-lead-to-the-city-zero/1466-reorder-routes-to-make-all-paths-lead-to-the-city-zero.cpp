class Solution {
public:
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<vector<pair<int,int>>>adjList(n);
        vector<bool>vis(n,false);
        queue<pair<int,int>>q;
        for(auto edges: connections){
            adjList[edges[0]].push_back({edges[1],1});
            adjList[edges[1]].push_back({edges[0],0});
        }
        q.push({0,0});
        vis[0]=1;
        int ans=0;
        while(!q.empty()){
            auto node = q.front();
            q.pop();
            ans+=node.second;
            for(auto &it : adjList[node.first]){
                if(!vis[it.first]){
                    q.push(it);
                    vis[it.first]=1;
                }
            }
        }
        return ans;
    }
};