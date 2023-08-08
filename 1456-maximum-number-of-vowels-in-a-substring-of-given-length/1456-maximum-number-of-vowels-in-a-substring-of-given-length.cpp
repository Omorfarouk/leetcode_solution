class Solution {
   bool isVowel(char c){
            return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u'  );
        }
public:
 
    int maxVowels(string s, int k) {
      int left=0, right=0,count=0;
      
        while(right<k){
            if(isVowel(s[right])){
                count++;
            }
            right++;
        }
        int maxCount=count;
        while(right<s.size()){
            if(isVowel(s[right])) count++;
            if(isVowel(s[left])) count--;
            maxCount=max(maxCount, count );
            right++;
            left++;
        }
        return maxCount;
    }
};

