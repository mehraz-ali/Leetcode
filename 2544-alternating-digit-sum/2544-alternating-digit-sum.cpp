class Solution {
public:
    int alternateDigitSum(int n) {
        int sum = 0;
        int s=1;
        while(n>0){
           sum+=s*(n%10);
           s=-s;
           n/=10;}
        return -s*sum;
    }
};