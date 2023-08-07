class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int left=0, right=0;
      long long int total=0;
        int res=0;
        while(right<nums.size()){
            total=total+nums[right];
            if((long)(right-left+1)*nums[right]>total+k){
                total=total-nums[left];
                left++;
            }
            
            res=max(res, right-left+1);
            right++;
        }
        return res;
    }
};