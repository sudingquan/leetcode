/*
 * @lc app=leetcode.cn id=103 lang=cpp
 *
 * [103] 二叉树的锯齿形层次遍历
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ret;
        if (root == nullptr) return ret;
        queue<TreeNode *> a;
        a.push(root);
        bool order = true;
        while(!a.empty()) {
            int n = a.size();
            deque<int> ind;
            for (int i = 0; i < n; i++) {
                TreeNode *temp = a.front();
                a.pop();
                if (order) {
                    ind.push_back(temp->val);
                } else {
                    ind.push_front(temp->val);
                }
                if (temp->left != nullptr) {
                    a.push(temp->left);
                }
                if (temp->right != nullptr) {
                    a.push(temp->right);
                }
            }
            ret.emplace_back((vector<int>){ind.begin(), ind.end()});
            order = !order;
        }
        return ret;
    }
};
// @lc code=end

