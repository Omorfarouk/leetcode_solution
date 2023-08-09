class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
      int low=0, high=arr.size()-1;
        while((high-low)>=k){
            if(abs(x-arr[low])>abs(x-arr[high])){
                low++;
            }
            else 
                high--;
        }
        vector<int>v(k);
        for(int i=low; i<=high; i++){
            v[i-low]=arr[i];
        }
        return v;
    }
};














// class Solution {
// public:
// vector<int> findClosestElements(vector<int>& arr, int k, int x) {
//   int lo = 0;
//   int hi = arr.size() - 1;
//   while (hi - lo >= k) {
//     if (abs(arr[lo] - x) > abs(arr[hi] - x)) {
//       lo++;
//     } else {
//       hi--;
//     }
//   }
//   vector<int> result(k);
//   for (int i = lo; i <= hi; i++) {
//     result[i - lo] = arr[i];
//   }
//   return result;
// }
// };