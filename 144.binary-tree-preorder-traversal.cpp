/*
 * @lc app=leetcode id=144 lang=cpp
 *
 * [144] Binary Tree Preorder Traversal
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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> iStack;
        iStack.push(root);
        while(!iStack.empty()){
            TreeNode* cur = iStack.top();
            iStack.pop();
            if(cur!=NULL){
                ans.push_back(cur->val);
                iStack.push(cur->right);
                iStack.push(cur->left);
            }
        }
        return ans;       
    }
};
// @lc code=end

