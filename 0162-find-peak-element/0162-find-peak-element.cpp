class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int high = nums.size() - 1;
        int low = 0;
        while (low < high) {
            int peak = low + (high - low) / 2;
            if (nums[peak] > nums[peak + 1]) {
                high = peak;
            } else
                low = peak + 1;
        }
        return low;
    }
};