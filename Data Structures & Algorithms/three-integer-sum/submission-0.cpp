class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int target = 0;
        vector<vector<int>> ans;
        set<vector<int>>st;
        sort(nums.begin(),nums.end());
        for (int i = 0; i < nums.size(); i++) {
            int low = i+1;
            int high = nums.size() - 1;
            while (low < high) {
                int sum = nums[i] + nums[low] + nums[high];
                if (sum == target) {
                    st.insert({nums[i], nums[low], nums[high]});
                    low++;
                    high--;
                } else if (sum < target) {
                    low++;
                } else {
                    high--;
                }
            }
        }
        for(auto i:st){
            ans.push_back(i);
        }
        return ans;
    }
};
