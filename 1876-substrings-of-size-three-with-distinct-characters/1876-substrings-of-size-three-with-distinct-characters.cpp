class Solution {
public:
    int countGoodSubstrings(string s) {
        int n=s.size();
        int l=0,r=2,m,count=0;
        if(n<3) return 0;
        while(r<n){
            m=l+1;
            if(s[l]!=s[m] && s[l]!=s[r] && s[m]!=s[r]){
                count++;
            }
            l++;
            r++;
        }
        return count;
    }
};