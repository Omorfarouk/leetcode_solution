/*
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
     sort(nums.begin(), nums.end());
        for(int i=1; i<nums.size()-1; i=i+2){
            swap(nums[i], nums[i-1]);
        }
        return nums;
    }
};
*/

// another way
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
    
        sort(nums.begin(), nums.end());
        int i=0;
        int j=nums.size()-1;
        vector<int>ans;
        while(i<=j){
            ans.push_back(nums[i]);
            if(i==j) break;
            ans.push_back(nums[j]);
            i++;
            j--;
        }
        return ans;
    }
};