class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s = "";
        int x = 0;
        for(int i=0;i<word1.length() || i<word2.length();i++){
            if(i<word1.length()){
                s.insert(x,1,word1[i]);
                x++;
            }
            if(i<word2.length()){
                s.insert(x,1,word2[i]);
                x++;
            }
        }
        return s;
    }
};