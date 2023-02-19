class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
       string sh=s;
        for(int i=0; i<indices.size(); i++){
            sh[indices[i]]=s[i];
        }
        return sh;
    }
};

