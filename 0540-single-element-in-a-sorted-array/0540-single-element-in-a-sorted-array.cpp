class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        if(nums.size()==1) return nums[0];
        if(nums[0] !=nums[1]) return nums[0];
        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]){
                return nums[mid];
            }
           else if(mid%2==0 && nums[mid]==nums[mid-1]){
                right=mid-2;
            }
            else if(mid%2==0 && nums[mid]==nums[mid+1]){
                left=mid+2;
            }
            else if(mid%2==1 && nums[mid]==nums[mid-1]){
                left=mid+1;
            }
            else if(mid%2==1 && nums[mid]==nums[mid+1]){
                right=mid-1;
            }
        }
        return -1;
    }
};






// class Solution {
// 	public int singleNonDuplicate(int[] nums) {

// 		int lo = 0;
// 		int hi = nums.length-1;

// 		//search space inside the while loop is AT LEAST 3 elements large
// 		while(lo+1<hi) {

// 			int mid = lo + (hi-lo)/2; //to avoid overflow

// 			//have access to nums[mid-1] and nums[mid+1] b/c search space AT LEAST 3 elements large
// 			if(nums[mid-1]!=nums[mid] && nums[mid+1]!=nums[mid]) return nums[mid];

// 			//else need to keep searching, 
// 			//you know nums[mid] is a DUPLICATE element
// 			//you want to set mid to POINT to the FIRST element of the duplicate pair

// 			//allow mid to point to first element of the pair if it isn't already
// 			if(nums[mid-1] == nums[mid]) mid--;

// 			//if first element of pair occurs at even index, you know left half has just duplicates, so search right half
// 			if(mid%2==0) lo = mid+2; 

// 			//if first element of pair occurs at odd index, you know left half must have the single element
// 			else hi = mid-1;
// 		}

// 		//At this point, search space is 2 elements?
// 		//not quite, the nature of our searching guarantees that problem size/search space is ALWAYS odd lengthed
// 		//so if we got out here, the search space is a SINGLE element
// 		return nums[hi]; //or nums[lo]

// 	}
// }