class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum = nums[0];
        int cur = nums[0];
        for(int i = 1; i < nums.size(); i++){
            cur = max(nums[i], cur+nums[i]);
            maxsum = max(cur, maxsum);
        }
        return maxsum;
    }
};
