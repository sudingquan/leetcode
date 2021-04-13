/*
 * @lc app=leetcode.cn id=389 lang=cpp
 *
 * [389] 找不同
 */

// @lc code=start
class Solution {
public:
    char findTheDifference(string s, string t) {
        int a = 0;
        for (auto i : t) {
            a += (int)i;
        }
        for (auto i : s) {
            a -= (int)i;
        }
        return (char)a;
    }
};
// @lc code=end

