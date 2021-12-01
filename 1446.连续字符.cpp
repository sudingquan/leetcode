/*
 * @lc app=leetcode.cn id=1446 lang=cpp
 *
 * [1446] 连续字符
 */

// @lc code=start
class Solution {
public:
    int maxPower(string s) {
        int m = 1, max1 = 1;
        char before = s[0];
        for (int i = 1; i< s.length(); i++) {
            if (s[i] == before) {
                m++;
                max1 = max(m, max1);
            } else {
                before = s[i];
                m = 1;
            }
        }
        return max1;
    }
};
// @lc code=end