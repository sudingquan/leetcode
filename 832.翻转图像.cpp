/*
 * @lc app=leetcode.cn id=832 lang=cpp
 *
 * [832] 翻转图像
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        int row_size = A.size(), col_size = A[0].size();
        for (int i = 0; i < row_size; i++) {
            for (int j = 0; j < (col_size + 1) / 2; j++){
                if (A[i][j] != A[i][col_size - 1 - j]) continue;
                A[i][j] = A[i][col_size - 1 - j]^= 1;
            }
        }
        return A;
    }
};
// @lc code=end

