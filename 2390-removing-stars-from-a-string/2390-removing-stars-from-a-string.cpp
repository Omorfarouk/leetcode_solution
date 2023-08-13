// class Solution {
// public:
//     string removeStars(string s) {
//         string ans;
//         int i=0;
//        while(i<s.size()){
//            if(s[i]=='*' && !ans.empty()){
//                ans.pop_back();
//            }
//            else {
//                ans.push_back(s[i]);
//            }
//            i++;
//        }
//         return ans;
//     }
// };



//using stack

class Solution {
public:
     string removeStars(string s) {
         stack<char>st;
         for(int i=0; i<s.size(); i++){
             if(s[i]!='*'){
                 st.push(s[i]);
             }
             else{
                 st.pop();
             }
         }
         string ans="";
         while(!st.empty()){
             ans+=st.top();
             st.pop();
         }
         reverse(ans.begin(),ans.end());
         return ans;
     }
};










