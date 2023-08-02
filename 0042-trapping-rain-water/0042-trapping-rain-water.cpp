// time O(n), space O(1)
/*
class Solution {
public:
    int trap(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int leftMax=height[i];
        int rightMax=height[j];
        int res=0;
        while(i<j){
          if(leftMax<=rightMax){
              i++;
              leftMax=max(leftMax, height[i]);
              res=res+leftMax-height[i];
          }
            else {
                j--;
                rightMax=max(rightMax, height[j]);
                res=res+rightMax-height[j];
            }
        }
        return res;
    }
};
*/

//time O(n) space O(n)
class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
     vector<int>leftMax(n);
        vector<int>rightMax(n);
        int left=height[0];
        int right=height[n-1];
        int res=0;
        for(int i=0; i<n; i++){
            left=max(left, height[i]);
            leftMax[i]=left;
        }
        for(int i=n-1; i>=0; i--){
            right = max(right, height[i]);
            rightMax[i]=max(right, height[i]);
        }
        for(int i=0; i<n; i++){
            int check=min(rightMax[i], leftMax[i]);
            if(height[i]<check){
                res=res+check-height[i];
            }
        }
        return res;
    }
};