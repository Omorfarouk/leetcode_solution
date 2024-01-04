






class Solution {
public:
    int dp[1000][1000];
	
    int findLUSlength(string a, string b) {
        int m = a.size();
        int n = b.size();
        
        for(int i=0; i<m+1; i++){
            for(int j=0; j<n+1; j++){
                if(i==0 or j==0) dp[i][j]=0;
                else if(a[i-1]==b[j-1]){
                    dp[i][j] = dp[i-1][j-1]+1;
                }
                else{
                    dp[i][j]= max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        
        int maxCom = dp[m][n];
        
        int ans = max(m-maxCom ,n-maxCom);
        if(ans<=0){
            return -1;
        }
        
        return max(m,n);
    }
};