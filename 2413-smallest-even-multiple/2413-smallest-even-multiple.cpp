class Solution {
public:
    int smallestEvenMultiple(int n) {
        int i;
        for( i=n; i<INT_MAX; i++){
            if(i%2==0 && i%n==0){
                break;
            }
        }
        return i;
    }
};