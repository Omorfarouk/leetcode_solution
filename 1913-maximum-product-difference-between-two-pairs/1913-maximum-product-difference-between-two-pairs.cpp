class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
       sort(nums.begin(), nums.end());
        int p1=nums[0]*nums[1];
        sort(nums.begin(), nums.end(),greater<int>());
        int p2=nums[0]*nums[1];
        int subtract=p2-p1;
        return subtract;
    }
};