class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
       int left=0;
        int right=0;
        int sum=0;
        int subl=0;
        int res=INT_MAX;
        for(int right=0; right<nums.size(); right++){
            sum=sum+nums[right];
            while(sum>=target){
                subl=right-left+1;
                res=subl<res? subl: res;
                sum=sum-nums[left++];
            }
        }
        return res==INT_MAX? 0: res;
    }
};