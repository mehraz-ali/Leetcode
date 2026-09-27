class Solution {
public:
    int titleToNumber(string columnTitle) {
        long long  res = 0;
        for (int i = 0; i < columnTitle.length(); i++) {
            res = res * 26 + columnTitle[i] - 64;
        }
        return res;
    }
};