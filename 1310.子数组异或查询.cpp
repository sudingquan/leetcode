/*
 * @lc app=leetcode.cn id=1310 lang=cpp
 *
 * [1310] 子数组异或查询
 */

// @lc code=start
class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = queries.size(), temp;
        vector<int> ans(n), xors(arr.size() + 1);
        for (int i = 0; i < arr.size(); i++) {
            xors[i + 1] = xors[i] ^ arr[i];
        }
        for (int i = 0; i < n; i++) {
            ans[i] = xors[queries[i][0]] ^ xors[queries[i][1] + 1];
        }
        return ans;
    }
};
// @lc code=end

