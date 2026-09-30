class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int max = INT_MIN;
        int smax = INT_MIN;
        int tmax = INT_MIN;

        int min = INT_MAX;
        int smin = INT_MAX;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > max) {
                tmax = smax;
                smax = max;
                max = nums[i];
            } else if (nums[i] > smax) {
                tmax = smax;
                smax = nums[i];
            } else if (nums[i] > tmax) {
                tmax = nums[i];
            }
            if (nums[i] < min) {
                smin = min;
                min = nums[i];
            } else if (nums[i] < smin) {
                smin = nums[i];
            }
        }

        return std::max(max * smax * tmax, min * smin * max);
    }
};