class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
       int  msum=0;
        int n=accounts.size();
        for(int i=0; i<n; i++){
            int sum=0;
            for(int j=0; j<accounts[i].size(); j++){
                sum=sum+accounts[i][j];
            }
            if(msum<sum)
                    msum=sum;
        }
        return msum;
    }
};