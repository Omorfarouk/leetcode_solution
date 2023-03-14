


class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
     unordered_set<char>st(allowed.begin(), allowed.end());
        int count=0;
        for(int i=0; i<words.size(); i++){
            string temp=words[i];
            bool ispresent=true;
            for(int j=0; j<temp.size(); j++){
                if(st.find(temp[j])==st.end()){
                    ispresent=false;
                    break;
                }
            }
            if(ispresent)
                count++;
        }
        return count;
            
        }
    };

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    