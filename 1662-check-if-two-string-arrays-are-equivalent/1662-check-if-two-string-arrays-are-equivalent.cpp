class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int n1=word1.size();
        int n2=word2.size();
        string ans1="", ans2="";
        for(int i=0; i<n1; i++){
            ans1=ans1+word1[i];
        }
        for(int i=0; i<n2; i++){
            ans2=ans2+word2[i];
        }
        if(ans1==ans2){
            return true;
        }
         
        return false;
    }
};