/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        int cmp,n=nums.size();
        for(int i=0;i<n;i++){
            cmp = target - nums[i];
            if(mp.count(cmp))
                return {mp[cmp],i};
            mp[nums[i]]=i;
        }
        return {};
    }
};
// @lc code=end

