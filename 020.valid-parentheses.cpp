/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start

#include <string>

using namespace std;

class Solution {
   public:
    bool isValid(string s) {
        string stack = "a";  // Avoid empty

        for (char c : s) {
            switch (c) {
                case '(':
                case '{':
                case '[':
                    stack += c;
                    break;
                case ')':
                    if (stack.back() == '(') {
                        stack.pop_back();
                    } else {
                        return false;
                    }
                    break;
                case '}':
                    if (stack.back() == '{') {
                        stack.pop_back();
                    } else {
                        return false;
                    }
                    break;
                case ']':
                    if (stack.back() == '[') {
                        stack.pop_back();
                    } else {
                        return false;
                    }
                    break;
            }
        }

        return (stack == "a");
    }
};

// @lc code=end
