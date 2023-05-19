/*
 * @lc app=leetcode id=258 lang=cpp
 *
 * [258] Add Digits
 */

// @lc code=start
class Solution {
public:
    int addDigits(int num) {
       return (num-1)%9+1; 
        // int n = 0;
        // while(n!=0){
        //     int rem = num%10;
        //     num/= 10;
        //     n+=rem;
        // }
        // return n;
    }
};
// @lc code=end

