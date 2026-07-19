/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start

#include <iostream>

using namespace std;

class Solution {
   public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) return false;

        int rev = 0;

        while (x > rev) {
            rev = rev * 10 + x % 10;
            x /= 10;
        }

        return x == rev || x == rev / 10;
    };
};

// int main() {
//     Solution solution;
//     int x = 134321;
//     bool result = solution.isPalindrome(x);
//     cout << "Is " << x << " a palindrome? " << (result ? "Yes" : "No") <<
//     endl; return 0;
// }

// @lc code=end