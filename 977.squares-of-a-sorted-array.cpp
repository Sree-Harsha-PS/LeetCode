/*
 * @lc app=leetcode id=977 lang=cpp
 *
 * [977] Squares of a Sorted Array
 */

// @lc code=start
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int z = 0, l = nums.size()-1, m = l;
        vector<int>res(nums.size());
        while (z<=l)
        {
            if(abs(nums[z])>abs(nums[l])){
                res[m--]= nums[z]*nums[z];
                z++;
            }
            else{
                res[m--] = nums[l]*nums[l];
                l--;
            }
        }
        return res;
    }

        /* int makeSq(int num){
        return num*num;
    }
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            nums[i]=makeSq(nums[i]);
        }
        sort(nums.begin(),nums.end());
        return nums;
    }*/
};
// @lc code=end

