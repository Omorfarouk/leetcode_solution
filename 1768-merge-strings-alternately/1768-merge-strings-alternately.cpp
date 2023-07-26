class Solution {
public:
    string mergeAlternately(string word1, string word2) {
      int n1=word1.size();
        int n2=word2.size();
        int i=0,j=0;
        string ans="";
        while(i<n1 && j<n2){
            ans=ans+word1[i];
            ans=ans+word2[j];
            i++;
            j++;
        }
        ans=ans+word1.substr(i)+word2.substr(j);
        return ans;
    }
};

