/*
 * @lc app=leetcode.cn id=1734 lang=cpp
 *
 * [1734] 解码异或后的排列
 */

// @lc code=start
class Solution {
public:
    vector<int> decode(vector<int>& encoded) {
        int n = encoded.size() + 1, all = 0;
        vector<int> ans;
        for (int i = 1; i <= n; i++) {
            all ^= i;
        }
        for (int i = 1; i < n; i += 2) {
            all ^= encoded[i];
        }
        ans.push_back(all);
        for (int i = 0; i < n - 1; i++) {
            all ^= encoded[i];
            ans.push_back(all);
        }
        return ans;
    }
};
// @lc code=end

