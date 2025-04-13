class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>res(n);
        stack<int>s;


        for(int i=n-1; i>=0; i--){

            while(!s.empty() && s.top()<=nums[i]){
                s.pop();
            }
           res[i]= s.empty()?-1:s.top();
           s.push(nums[i]);
        }

        for (int i=n-1; i>=0; i--){
            if(res[i]==-1){
                while(!s.empty() && s.top() <=nums[i]){
                    s.pop();
                }
                res[i]=s.empty()?-1: s.top();
            }
            
            s.push(nums[i]);
        }

        return res;
    }
};
