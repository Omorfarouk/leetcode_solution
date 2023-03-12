

// class Solution {
//     public:
//     int arithmeticTriplets(vector<int>& nums, int diff) {
//         set<int>s(nums.begin(), nums.end());
//         int ans=0;
//         for(int i=0; i<nums.size(); i++){
//             if(s.find(nums[i]-diff)!=s.end() && s.find(nums[i]-diff*2)!=s.end())
//                 ans++;
//         }
//         return ans;
//     }
// };



//brute force method
class Solution {
    public:
 
      int arithmeticTriplets(vector<int>& nums, int diff) {
          int ans=0;
          for(int i=0; i<nums.size(); i++){
              for(int j=i+1; j<nums.size(); j++){
                  for(int k=j+1; k<nums.size(); k++){
                      if((nums[j]-nums[i])==diff && (nums[k]-nums[j])==diff)
                          ans++;
                  }
              }
          }
          return ans;
      }
};


    