class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
       sort(nums.begin(), nums.end());
        vector<int>v;
        for(auto q: queries){
            int sum=0, count=0;
            for(int i=0; i<nums.size(); i++){
                sum=sum+nums[i];
                if(sum<=q)
                    count++;
            }
            v.push_back(count);
        }
        return v;
            
    }
};