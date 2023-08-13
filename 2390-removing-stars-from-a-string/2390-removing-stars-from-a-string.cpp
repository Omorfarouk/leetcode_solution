class Solution {
public:
    string removeStars(string s) {
        string ans;
        int i=0;
       while(i<s.size()){
           if(s[i]=='*' && !ans.empty()){
               ans.pop_back();
           }
           else {
               ans.push_back(s[i]);
           }
           i++;
       }
        return ans;
    }
};


// class Solution {
// public:
//     string removeStars(string s) {
//         string ans;
//         int i=0;
//         while(i<s.size())
//         {
//             if(s[i]=='*' && !ans.empty())
//                ans.pop_back();
//             else
//                ans.push_back(s[i]);
//             i++;            
//         }  
//         return ans;
//     }
// };

// class Solution {
// public:
//     string removeStars(string s) {
//         stack<char> st;
//         int n  = s.size();
//         for(int i=0;i<n;i++)
//         {
//             if(s[i] != '*')
//             {
//                 st.push(s[i]);
//             }
//             else
//                 st.pop();
            
//         }
        
//         string res = "";
        
//         while(!st.empty())
//         {
//             res+=st.top();
//             st.pop();
//         }
//         reverse(res.begin(),res.end());
//         return res;
//     }
// };












