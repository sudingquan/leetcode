/*
 * @lc app=leetcode.cn id=872 lang=cpp
 *
 * [872] 叶子相似的树
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
    void dfs(TreeNode* root, vector<int>& vec){
        if (root->left == NULL && root->right == NULL) {
            vec.push_back(root->val);
            return ;
        }
        if (root->right != NULL) {
            dfs(root->right, vec);
        }
        if (root->left != NULL) {
            dfs(root->left, vec);
        }
        return ;
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> vec1, vec2;
        if (root1 != NULL) {
            dfs(root1, vec1);
        }
        if (root2 != NULL) {
            dfs(root2, vec2);
        }
        return vec1 == vec2;
    }
};
// @lc code=end

