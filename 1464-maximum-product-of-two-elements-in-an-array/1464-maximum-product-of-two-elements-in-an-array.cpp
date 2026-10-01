class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max = 0;
        int smax = 0;
        for (int a : nums) {
            if (a > max) {
                smax = max;
                max = a;
            } else if (a > smax) {
                smax = a;
            }
        }
        return (max - 1) * (smax - 1);
    }
};