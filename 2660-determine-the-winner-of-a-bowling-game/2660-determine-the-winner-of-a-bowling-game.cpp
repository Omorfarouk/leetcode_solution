// class Solution {
// public:
//     int isWinner(vector<int>& p1, vector<int>& p2) {
//         int sum1=0, sum2=0;
//         for(int i=0; i<p1.size(); i++){
//             if(i>=1 && p1[i-1]>=10) sum1=sum1+p1[i]*2;
//             else if(i>=2 && p1[i-1>=10] || p1[i-2]>=10 ) sum1=sum1+p1[i]*2;
//             else sum1+=p1[i];
//         }
       
//         for(int i=0; i<p2.size(); i++){
//             if(i>=1 && p2[i-1]>=10) sum2=sum2+p2[i]*2;
//             else if(i>=2 && (p2[i-1]>=10  || p2[i-2]>=10)) sum2=sum2+p2[i]*2;
//             else sum2+=p2[i];
//         }
//         if(sum1>sum2) return 1;
//         else if(sum2>sum1) return 2;
//         else return 0;
//     }
// };



class Solution {
public:
//     player1 = [3,5,7,6], player2 = [8,10,10,2]
// Output: 2
// Explanation: The score of player1 is 3 + 5 + 7 + 6 = 21.
// The score of player2 is 8 + 10 + 2*10 + 2*2 = 42.
// Score of player2 is more than the score of player1, so, player2 is the winner, and the answer is 2..
    
//     1 if the score of player 1 is more than the score of player 2,
// 2 if the score of player 2 is more than the score of player 1, and
// 0 in case of a draw.
 
    int isWinner(vector<int>& player1, vector<int>& player2) {
    int o=0,t=0;
    
        for(int i=0;i<player1.size();i++){
            
            if(i>=1 and player1[i-1]>=10) o+=2*player1[i];  // just checking previous turn for 10 or greater
            else if(i>=2 and (player1[i-1]>=10 or player1[i-2]>=10)) o+=2*player1[i]; // checking previous 2 turn for a 10 or greater
            else o+=player1[i];   // else add that value
        }
    // cout<<o<<" ";
    
     for(int i=0;i<player2.size();i++){
            
         if(i>=1 and player2[i-1]>=10) t+=2*player2[i];
           else if(i>=2 and (player2[i-1]>=10 or player2[i-2]>=10)) t+=2*player2[i];
            else t+=player2[i];
        }
        // cout<<t<<endl;
    if(o>t) return 1;
    else if(t>o) return 2;
    else return 0;
    }
};
