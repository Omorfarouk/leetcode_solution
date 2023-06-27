class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
     int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0; i<n; i++){
        mp[nums[i]]++;     
        }
        vector<vector<int>> b(n+1);
       for(auto it =mp.begin(); it!=mp.end(); it++ ){
           b[it->second].push_back(it->first);
       }
        vector<int>res;
        for(int i=n; i>=0; i--){
            if(res.size()>=k){
                break;
            }
        if(!b[i].empty()){
            res.insert(res.end(), b[i].begin(), b[i].end());
        }
        }
        return res;
    }
};