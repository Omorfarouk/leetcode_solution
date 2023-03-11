//hash set (unordered_set)
/*
class Solution {
public:
    bool checkIfPangram(string s) {
        unordered_set<char>seen(begin(s),end(s));
        return size(seen)==26;
    }
};
*/



//sort and unique
class Solution {
public:
    bool checkIfPangram(string s) {
       sort(s.begin(),s.end());
       return distance(s.begin(), unique(s.begin(), s.end()))==26;
    }
};

