/*
 * @lc app=leetcode id=844 lang=cpp
 *
 * [844] Backspace String Compare
 */

// @lc code=start
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int k = 0, p = 0;
        for(auto &ch : s){
            if(ch=='#'){
                k--;
                if(k<0) 
                    k=0;
            }
            else{
                s[k++]=ch;
            }
        }
        for(auto &ch : t){
            if(ch=='#'){
                p--;
                if(p<0) 
                    p=0;
            }
            else{
                t[p++]=ch;
            }
        }
        if(s.compare(t)==0)
            return true;
        return false;
    }
};
// @lc code=end

