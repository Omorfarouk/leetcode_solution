// class Solution {
// public:
//     int arrangeCoins(int n) {
//         int k=0;
//         if(n==1) return 1;
//         while(n>0){
//             k++;
//             n=n-k;
//         }
//      return   k==0?k:k-1;
//     }
// };



class Solution{
    public :
        int arrangeCoins(int n) {
        int k =0;
        while(n>0)
        {
            k++;
            n= n-k;
        }
        return n==0? k : k-1;

    }
};