class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ret;
        int temp = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0)
                ret.push_back(nums[i]);
            else
                temp++;
        }
        for(int i = 0; i < temp; i++)
            ret.push_back(0);
        
        nums = move(ret);
    }
};
