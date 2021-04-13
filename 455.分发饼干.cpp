/*
 * @lc app=leetcode.cn id=455 lang=cpp
 *
 * [455] 分发饼干
 */

// @lc code=start
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int ret = 0,j = 0;
        for (; ret < g.size() && j < s.size(); j++) {
            if (g[ret] <= s[j]) ret++;
        }
        return ret;
    }
};
// @lc code=end

