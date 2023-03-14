// class Solution {
// public:
//     int uniqueMorseRepresentations(vector<string>& words) {
//       vector<string>hash={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
//         set<string>s;
//         for(int i=0; i<words.size(); i++){
//             string temp="";
//             for(int j=0; j<words[i].size(); j++){
//                 temp=temp+hash[words[i][j]-'a'];
//             }
//             s.insert(temp);
//         }
//         return s.size();
//     }
// };






















class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string>hash={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string>s;
        for(int i=0; i<words.size(); i++){
            string temp="";
            for(int j=0; j<words[i].size(); j++){
                temp=temp+hash[words[i][j]-'a'];
            }
            s.insert(temp);
        }
        return s.size();
}
};

















