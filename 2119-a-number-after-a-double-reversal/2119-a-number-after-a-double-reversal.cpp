class Solution {
public:
    bool isSameAfterReversals(int num) {
        if (num == 0)
            return true;
        int rev = 0;
        int rev2 = 0;
        int temp = num;
        while (num > 0) {
            int d = num % 10;
            rev=rev*10+d;
            num = num / 10;
        }
        while (rev > 0) {
            int d = rev % 10;
            rev2 = rev2 * 10 + d;
            rev = rev / 10;
        }
        if (rev2 == temp) {
            return true;
        }
        return false;
    }
};