/*
 * @lc app=leetcode.cn id=387 lang=cpp
 *
 * [387] 字符串中的第一个唯一字符
 */

// @lc code=start
class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int> m;
        int flag = -1;
        for (auto i : s) {
            m[i] += 1;
        }
        for (int i = 0; i < s.size(); i++) {
            if (m[s[i]] == 1) {
                flag = i;
                break;
            }
        }
        return flag;
    }
};
// @lc code=end

