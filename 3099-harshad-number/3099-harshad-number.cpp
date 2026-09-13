class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum = 0;
        int temp = x;
        while (x > 0) {
            int d = x % 10;
            sum = sum + d;
            x = x / 10;
        }
        if (temp % sum == 0) {
            return sum;
        }
        return -1;
    }
};