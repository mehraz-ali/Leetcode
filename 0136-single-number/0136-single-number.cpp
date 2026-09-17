class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> m;
        for (int x : nums) {
            m[x]++;
        }
        for (auto z : m) {
            if (z.second == 1) {
                return z.first;
            }
        }
        return -1;
    }
};