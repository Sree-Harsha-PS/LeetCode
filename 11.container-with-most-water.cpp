/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
class Solution {
public:
    int maxArea(vector<int>& height) {
        int res = 0, n = height.size();
        int i = 0, j = n-1;
        while(i<j){
            if(height[i]>height[j]){
                res = max(res, (j-i)*height[j]);
                j--;
            }
            else{
                res = max(res, (j-i)*height[i]);
                i++;
            }
        }
        return res;
    }
};
// @lc code=end

