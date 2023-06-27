

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0 ) return 0;
        if(nums.size()==1) return 1;
        sort(nums.begin(), nums.end());
        int len=1, maxLen=1;
        int n=nums.size();
        for(int i=0; i<n-1; i++){
            if(nums[i+1]-nums[i]==1){
                len++;
            }
            else if(nums[i+1]==nums[i]) {
                continue;
            }
            else {
                len=1;
            }
            maxLen=max(len, maxLen);
        }
        return maxLen;
    }
};











