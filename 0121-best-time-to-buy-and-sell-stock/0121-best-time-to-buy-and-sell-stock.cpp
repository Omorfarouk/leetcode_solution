
//brute force
/*
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
       for(int i=0; i<prices.size(); i++){
           for(int j=i+1; j<prices.size(); j++){
              ans=max(ans, prices[j]-prices[i]);
           }
       } 
        return ans;
    }
};
*/

//sliding window
class Solution {
public:
    int maxProfit(vector<int>& prices) {
   int maxP=0, l=0, r=0;
        while(r<prices.size()){
            if(prices[l]<prices[r]){
                maxP=max(maxP, prices[r]-prices[l]);
            }
            else l=r;
            r++;
        }
        return maxP;
    }
};