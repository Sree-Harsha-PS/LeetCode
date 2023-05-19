/*
 * @lc app=leetcode id=442 lang=cpp
 *
 * [442] Find All Duplicates in an Array
 */

// @lc code=start
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            int x = abs(nums[i]);
            if(nums[x-1]<0)
                res.push_back(nums[i]);
            else
                res[x-1]=-res[x-1];
        }
        return res;
    }
};
// @lc code=end

