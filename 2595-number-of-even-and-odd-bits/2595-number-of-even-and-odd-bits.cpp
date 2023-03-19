class Solution{
    public:
    vector<int>evenOddBit(int n){
        int even=0, odd=0;
        int i=0;
        while(n>0){
            if(i%2==0){
                if(n%2==1)
                    even++;
            }
            else{
                if(n%2==1)
                    odd++;
            }
            n=n/2;
            i++;
        }
        return {even, odd};
    }
};

