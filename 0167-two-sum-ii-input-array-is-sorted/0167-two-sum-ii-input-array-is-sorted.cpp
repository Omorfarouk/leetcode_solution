class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       int i=0; 
        int j=numbers.size()-1;
        vector<int>v;
        while(i<j){
            if(numbers[i]+numbers[j]==target){
                v.push_back(i+1);
                v.push_back(j+1);
                break;
            }
            else if(numbers[i]+numbers[j]<target){
                i++;
            }
            else if(numbers[i]+numbers[j]>target){
                j--;
            }
        }
        return v ;
    }
};