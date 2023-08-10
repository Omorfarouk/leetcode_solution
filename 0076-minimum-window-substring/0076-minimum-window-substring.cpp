
//ata final solution

class Solution {
public:
  string minWindow(string s, string t) {
  if(t.empty()) return "";
      unordered_map<char, int>countT, window;
      for(auto c: t){
          countT[c]++;
      }
      int have=0, need=countT.size();
      int resStart=0, resLen=INT_MAX, l=0;
      for(int r=0; r<s.size(); r++){
          window[s[r]]++;
          if(countT.find(s[r])!=countT.end() && countT[s[r]]==window[s[r]]){
              have++;
          }
          while(have==need){
              if(r-l+1<resLen){
                  resStart=l;
                  resLen=r-l+1;
              }
             
              window[s[l]]--;
              if(countT.find(s[l])!=countT.end() && window[s[l]]<countT[s[l]]){
                  have--;
              }
             l++;
          }
      }
      if(resLen!=INT_MAX) return s.substr(resStart, resLen);
      return "";
  }
};