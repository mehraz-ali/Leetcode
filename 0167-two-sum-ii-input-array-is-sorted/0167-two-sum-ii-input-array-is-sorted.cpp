class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int high = numbers.size() - 1;
        int low = 0;
        while (low <= high) {
            int sum = numbers[low] + numbers[high];
            if (sum == target) {
                return {low + 1, high + 1};
            } else if (sum < target) {
                low++;
            } else
                high--;
        }
        return {0, 0};
    }
};