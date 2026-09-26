class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0)
            return "0";
        string s = "";
        bool isNegative = num < 0;
        long long n = abs(num);
        while (n > 0) {
            int d = n % 7;
            s.insert(0, to_string(d));
            n = n / 7;
        }
        if (isNegative) {
            s.insert(0, "-");
        }

        return s;
    }
};
