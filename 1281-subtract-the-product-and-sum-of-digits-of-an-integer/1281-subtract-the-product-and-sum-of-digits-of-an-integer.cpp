class Solution {
public:
    int subtractProductAndSum(int n) {
        string s=to_string(n);
        int mul=1, sum=0;
        for(int i=0; i<s.size(); i++){
             mul=mul*(s[i]-'0');
            sum=sum+(s[i]-'0');
        }
        return mul-sum;
    }
};