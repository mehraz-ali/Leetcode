class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max = 0;
        int index = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > max) {
                max = nums[i];
                index = i;
            }
        }
        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] == max) {
                continue;
            }
            if (nums[j] * 2 > max) {
                return -1;
            }
        }
        return index;
    }
};