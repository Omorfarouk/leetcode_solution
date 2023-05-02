class Solution {
public:
    int maximizeSum(vector<int>& n, int k) {
      
       int A = *max_element(begin(n), end(n));
       int res= k*(2*A + (k-1)*1)/2;
        return res;
    }
};

