
//  https://www.youtube.com/watch?v=HAOWJP1QMcg

class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n=blocks.size();
        int count=0,ans=0;
        int left=0, right=k;
        for(int i=left; i<right; i++){
            if(blocks[i]=='W') count++;
        }
       ans=count;
        left++;
        right;
        
        while(right<n){
            if(blocks[right]=='W' && blocks[left-1]=='B') count++;
            else if(blocks[right]=='B' && blocks[left-1]=='W') count--;
            ans=min(ans,count);
            left++;
            right++;
        }
        return ans;
    }
};






