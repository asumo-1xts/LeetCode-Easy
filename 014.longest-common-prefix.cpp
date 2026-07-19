/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start

#include <string>
#include <vector>

using namespace std;

class Solution {
   public:
    string longestCommonPrefix(vector<string>& strs) {
        string curr = strs[0];

        for (int i = 1; i < strs.size(); i++) {
            string next = strs[i];

            while (curr != next) {
                if (curr.size() > next.size()) {
                    curr.pop_back();
                } else {
                    next.pop_back();
                }
            }
        }

        return curr;
    }
};

// @lc code=end
