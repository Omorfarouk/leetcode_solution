class Solution {
public:
    int pivotInteger(int n) {
        int a[n+1];
        int sum=0;
        for(int i=1; i<=n; i++){
            sum+=i;
            a[i]=sum;
        }
        sum=0;
        for(int i=n; i>=1; i--){
            sum+=i;
            if(a[i]==sum) return i;
        }
        return -1;
    }
};