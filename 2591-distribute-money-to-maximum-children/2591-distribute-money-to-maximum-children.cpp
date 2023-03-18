
class Solution {
public:
    int distMoney(int money, int children) {
        int count=0;
        if(money<children)
            return -1;
        while(money>0 && children>0){
            money=money-8;
            children--;
            count++;
            if(money>0 && children==0) return count-1;
             if(money<children) return count-1;
            if(money==4 && children==1) return count-1;
        }
        return count;
    }
};

