class Solution {
public:
    string reversePrefix(string word, char ch) {
        int x=word.find(ch);
        int left=0;
        int right=x;
        while(left<right){
        string temp=word;
        word[left]=word[right];
        word[right]=temp[left];
        left++;
        right--;}
        return word;
    }
};