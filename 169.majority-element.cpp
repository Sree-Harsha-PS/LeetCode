/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0;
        int major = 0;
        for(auto i:nums){
            if(cnt==0)
                major = i;
            cnt += (i == major)?1:-1;
        }
        return major;
    }
};
// @lc code=end

