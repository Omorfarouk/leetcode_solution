class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
     sort(nums.begin(), nums.end());
      int l=0, r=k-1;
        int ans=INT_MAX;
        while(r<nums.size()){
         ans=min(ans, nums[r]-nums[l]);
            l++;
            r++;
        }
        return ans;
    }
};