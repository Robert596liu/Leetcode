class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int prod = 1;
        for(int i = 0; i < n; ++i){
            ans[i] = prod;
            prod *= nums[i];
        }
        // at this point, ans[i] = product of first i elements
        prod = 1;
        for(int j = n - 1; j >= 0; --j){
            ans[j] *= prod;
            prod *= nums[j];
        }
        return ans;
    }
};
