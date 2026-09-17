class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map <int,int>m;
        for(int x:nums){
            m[x]++;
        }
        int max=0;
        int majority=0;
        for(auto x:m){
            if(x.second>max){
                max=x.second;
                majority=x.first;
            }
        }
        return majority;
    }
};