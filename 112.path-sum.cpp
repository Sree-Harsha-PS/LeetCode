/*
 * @lc app=leetcode id=112 lang=cpp
 *
 * [112] Path Sum
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root)
            return false;
        if(root->val==targetSum && !root->left && !root->right)
            return true;
        return (hasPathSum(root->left,targetSum-root->val)||hasPathSum(root->right,targetSum-root->val));
    }
/*        vector<int> res;
        TreeNode* cur = root;
        while(cur!=NULL){
            int x = cur->val;
        }*/
};
// @lc code=end
