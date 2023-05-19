/*
 * @lc app=leetcode id=238 lang=cpp
 *
 * [238] Product of Array Except Self
 */

// @lc code=start
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size(),pre=1,suf=1;
        vector<int> res(n,1);
        for(int i=0; i<n; i++){
            res[i] *= pre;
            pre *= nums[i];

            res[n-i-1]*=suf;
            suf *= nums[n-i-1];
        }
        return res;
    }
};
// @lc code=end

