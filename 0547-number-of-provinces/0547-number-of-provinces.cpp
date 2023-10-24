




class Solution {
public:
    
    int parent[201];
    int rank[201];
    void makeset(int v)
    {
        for(int i=0;i<v;i++)
        {
            parent[i]=i;
            rank[i]=1;
        }
    }
    int findparent(int u)
    {
        if(parent[u]==u)
            return u;
        return parent[u]=findparent(parent[u]);
    }
    void findunion(int u,int v)
    {
         u=findparent(u);
         v=findparent(v);
        if(rank[u]<rank[v])
        {
            parent[u]=v;
        }
        else if(rank[u]>rank[v])
        {
            parent[v]=u;
        }
        else
        {
            parent[u]=v;
            rank[v]++;
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int v=isConnected.size();
        makeset(v);
            for(int i=0; i<v;i++)
            {
                for(int j=i+1;j<v;j++)
                {
                    if(isConnected[i][j])
                    {
                        findunion(i,j);
                    }
                }
            }
        int count=0;
        for(int i=0;i<v;i++)
        {
            if(parent[i]==i)
            {
                count++;
            }
        }
        return count;
    }
};