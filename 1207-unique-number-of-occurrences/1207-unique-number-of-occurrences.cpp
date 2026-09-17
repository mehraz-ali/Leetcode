class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> m;
        for (int x : arr) {
            m[x]++;
        }
        set<int> s;
        for (auto z : m) {
            if (s.count(z.second)) {
                return false;
            } else {
                s.insert(z.second);
            }
        }
        return true;
    }
};