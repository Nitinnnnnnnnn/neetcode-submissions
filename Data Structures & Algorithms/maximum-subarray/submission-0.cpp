class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int curr=0;
      int maxs=INT_MIN;
      for(int i:nums){
        curr+=i;
        maxs=max(maxs,curr);
        if(curr<0){
            curr=0;
        }
      }
      return  maxs;
    }
};
