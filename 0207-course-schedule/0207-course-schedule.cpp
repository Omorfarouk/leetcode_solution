// detecd cycle in a  graph concept 

class Solution {
public:
    bool cycle(int s, vector<bool>& vis, vector<bool>& currVis, vector<int>adj[]) {
        vis[s] = true;
        currVis[s] = true;
        for (auto x : adj[s]) {
            if (!vis[x]) {
                if (cycle(x, vis, currVis, adj)) {
                    return true;
                }
            }
            else if (vis[x] && currVis[x]) {
                return true;
            }
        }
        currVis[s] = false;
        return false;
    }
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> adj[numCourses];
        for (auto edge : prerequisites) {
            adj[edge[1]].push_back(edge[0]);
        }
        vector<bool> vis(numCourses, false), currVis(numCourses, false);
        
        for (int i = 0; i < numCourses; i++) {
            if (!vis[i]) {
                if (cycle(i, vis, currVis, adj)) {
                    return false;
                }
            }
        }
        return true;
    }
};
