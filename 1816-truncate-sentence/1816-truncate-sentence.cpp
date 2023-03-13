class Solution {
public:
    string truncateSentence(string s, int k) {
       string ans="";
        int n=s.length();
        int count=0;
        for(int i=0; i<n; i++){
            if(s[i]==' '){
                count++;
            }
            if(count==k)
                break;
            ans=ans+s[i];
        }
        return ans;
    }
};


//using erase() 
/*
class Solution {
public:
    string truncateSentence(string s, int k) {
        int n=s.length();
        int count=0;
        for(int i=0; i<n; i++){
            if(s[i]==' '){
                count++;
            }
            if(count==k){
                s.erase(i, (n-i) );
                break;
            }
        }
        return s;
    }
};
*/
