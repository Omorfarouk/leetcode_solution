class Solution {
public:
    int longestSemiRepetitiveSubstring(string s) {
        int count=0;
       int  ans=0;
        for(int i=0; i<s.size(); i++){
            for(int j=i; j<s.size()-1; j++){
           if(s[j]==s[j+1]){
               count++;
           }
             if(count<=1){
                   ans=max(ans, j-i+1);
                }
            
                else if(count>1){
                    count=0;
                    break;
                }
                
            }
        }
        return ans+1;
    }
};




















// class Solution {
// public:
//     int longestSemiRepetitiveSubstring(string s) {
//         int ans=0;
//         int cnt=0;
//         for(int i=0;i<s.size();i++){
//             for(int j=i;j<s.size()-1;j++){
//                 if(s[j]==s[j+1]){
//                     cnt++;
//                 }
//                 if(cnt<=1){
//                     ans=max(ans,j-i+1);
//                 }
//                 if(cnt>1){
//                     cnt=0;
//                     break;
//                 }
//             }
//         }
//        return ans+1;
        
//     }
// };