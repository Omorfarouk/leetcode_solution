class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int>mp;
        int i=0,j=0;
        int maxCount=0;
        int res=0;
        while(j<s.size()){
            mp[s[j]]++;
            maxCount=max(maxCount, mp[s[j]]);
            if(j-i+1-maxCount>k){
                mp[s[i]]--;
                i++;
            }
            res=max(res, j-i+1);
            j++;
        }
        return res;
    }
};


// class Solution {
// public:
//     int characterReplacement(string s, int k) {
//         unordered_map<char,int> mp;
//     int i=0,j=0,ans=0,res=0;
//     for(int i=0;i<s.size();i++){
//         mp[s[i]]++;
//         ans=max(ans,mp[s[i]]);
//         if(i-j+1 -ans>k){
//             mp[s[j]]--;
//             j++;
//         }
//         res=max(res,i-j+1);
//     }
//     return res;
//     }
// };