class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0;
        int prod=1;
        while(n!=0){
            int d=n%10;
            sum=sum+d;
            prod=prod*d;
            n/=10;
        }
        return prod-sum;
    }
};