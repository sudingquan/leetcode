/*
 * @lc app=leetcode.cn id=766 lang=cpp
 *
 * [766] 托普利茨矩阵
 */

// @lc code=start
class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        bool flag = true;
        int  m = matrix.size(), n = matrix[0].size();
        for (int i = 0; i < m - 1; i++) {
            for (int j = 0; j < n - 1; j++) {
                if (matrix[i][j] == matrix[i + 1][j + 1])
                    continue;
                flag = false;
            }
        }
        return flag;
    }
};
// @lc code=end

