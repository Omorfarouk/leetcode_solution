class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
     int sum=0;
        for(int i=0; i<k ; i++){
            sum+=arr[i];
        }
        int count=0;
        if(sum/k >= threshold) count++;
        int i=0;
        int j=k;
        while(j<arr.size()){
            sum=sum-arr[i];
            sum=sum+arr[j];
            i++;
            j++;
            if(sum/k>= threshold) count++;
        }
        return count;
    }
}; 
