/*
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0;
        for(int i=2; i<nums.size(); i++){
            if(nums[i]!=nums[k]){
                nums[k+2]=nums[i];
                k++;
            }
        }
        return k+2;
    }
};
*/

 
//using map
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
int k=0; 
map<int,int>mp;
for(auto it: nums){
  mp[it]++;
  if(mp[it]<=2){
      nums[k]=it;
  k++;
  }
}
return k;
    }
};
