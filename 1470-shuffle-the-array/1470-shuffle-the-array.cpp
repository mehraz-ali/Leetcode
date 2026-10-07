class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
     vector<int>v(2*n);
     int k=0;
     int j=1;
     for(int i=0;i<n;i++){
         v[k]=nums[i];
         k+=2;
     }
     for(int i=n;i<2*n;i++){
        v[j]=nums[i];
        j+=2;
     }
     return v;
    }
};