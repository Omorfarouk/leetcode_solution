class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        int n1=nums[0];
        int n2=nums[n-1];
        while(n2!=0){
            int  rem=n1%n2;
            n1=n2;
            n2=rem;
        }
        return n1;
    }
};



//using gcd function
/*
class Solution {
public:
    int findGCD(vector<int>& nums) {
     
        int n1=*min_element(nums.begin(), nums.end());
        int n2=*max_element(nums.begin(), nums.end());
        return gcd(n1, n2);
}
};
*/