class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int arr[26] = {0};
        for (char c : ransomNote) {
            arr[c - 'a']++;
        }
        for (int i = 0; i < magazine.length(); i++) {
            arr[magazine[i] - 'a']--;
        }
        for (int i = 0; i < 26; i++) {
            if (arr[i] > 0) {
                return false;
            }
        }
        return true;
    }
};