class Solution {
public:
    int search(vector<int>& nums, int target) {
        int right=nums.size()-1;
        int left=0;
        while(left<=right){
            int mid=(right+left)/2;
            if(nums[mid]==target) return mid;
            else if(target<nums[mid]){
              right=mid-1;
            }
            else if(target>nums[mid]){
                left=mid+1;
            }
        }
        return -1;
    }
};