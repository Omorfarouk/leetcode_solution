class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string ref=to_string(num);
        int n= ref.size();
        string div="";
        for(int i=0; i<k; i++){
            div=div+ref[i];
        }
        int count=0;
        int check=stoi(div);
        if(num%check==0)
            count++;
        for(int i=k; i<n; i++){
            div=div.substr(1)+ref[i];
            check=abs(stoi(div));
            if(check==0)
                continue;
            if(num % check == 0)
                count++;
        }
        return count;
    }
};