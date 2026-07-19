/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start

#include <iostream>
#include <string>

using namespace std;

class Solution {
   public:
    int romanToInt(string s) {
        int ans = 0;
        int iter = 0;
        int prev = 0;

        while (iter < s.size()) {
            int curr = 0;
            switch (s[s.size() - 1 - iter]) {
                case 'I':
                    curr = 1;
                    break;
                case 'V':
                    curr = 5;
                    break;
                case 'X':
                    curr = 10;
                    break;
                case 'L':
                    curr = 50;
                    break;
                case 'C':
                    curr = 100;
                    break;
                case 'D':
                    curr = 500;
                    break;
                case 'M':
                    curr = 1000;
                    break;
                default:
                    break;
            }

            if (prev <= curr) {
                ans += curr;
            } else {
                ans -= curr;
            }
            prev = curr;
            iter++;
        }
        return ans;
    }
};

// @lc code=end
