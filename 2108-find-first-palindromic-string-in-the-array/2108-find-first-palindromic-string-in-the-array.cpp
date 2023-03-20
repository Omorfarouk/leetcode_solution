class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int n=words.size();
        string temp;
       int flag=0;
        for( int i=0; i<n; i++){
             temp=words[i];
            reverse(temp.begin(), temp.end());
            if(temp==words[i]){
                flag=1;
                break;
            }
        }
        return flag==1?temp:"";
    }
};