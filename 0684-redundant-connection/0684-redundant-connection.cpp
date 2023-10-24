class Solution {
public:
    
    int find(int v, int par[]){
        if(par[v]==v) 
            return v;
        
        return par[v]=find(par[v],par);
    }
    
    void union_op(int fromP, int toP, int par[], int rank[]){
        fromP=find(fromP,par);
        toP=find(toP, par);
        
        if(rank[fromP]>rank[toP])
            par[toP]=fromP;
        
        else if(rank[fromP]<rank[toP])
            par[fromP]=toP;
        
        else{
            par[fromP]=toP;
            rank[toP]++;
        }
    }
    
     vector<int>ans;
    void isCycle(vector<vector<int>>& edges , int par[], int rank[]){
        for(auto p : edges){
            int fromP=find(p[0],par);
            int toP=find(p[1],par);
            
            if(fromP==toP){
                ans.push_back(p[0]);
                ans.push_back(p[1]);
            }
            
            union_op(p[0], p[1], par, rank);
        }
    }
    
    
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
     
      int n=edges.size();
      int par[n+1];
      int rank[n+1];
        
        for(int i=1; i<=n; i++){
            par[i]=i;
            rank[i]=0;
        }
        
      isCycle(edges,par,rank);
        
        return ans;
       
    }
};