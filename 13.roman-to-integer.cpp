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
    int iter = 0;

   public:
    int romanToInt(string s) {
        int n1 = 0, n2 = 0, n3 = 0, n4 = 0;

        // ========== 千の位の処理 ===========
        while (s[iter] == 'M') {
            n1++;
            iter++;
        }

        // ========== 百、十、一の位の処理 ===========
        n2 = getDigit(s, 'C', 'D', 'M');
        n3 = getDigit(s, 'X', 'L', 'C');
        n4 = getDigit(s, 'I', 'V', 'X');

        return n1 * 1000 + n2 * 100 + n3 * 10 + n4;
    }

   private:
    int getDigit(const string &s, char one, char five, char ten) {
        int n = 0;
        if (s[iter] == one) {
            if (s[iter + 1] == ten) {
                n = 9;
                iter += 2;
            } else if (s[iter + 1] == five) {
                n = 4;
                iter += 2;
            } else {
                while (s[iter] == one) {
                    n++;
                    iter++;
                }
            }
        } else if (s[iter] == five) {
            n = 5;
            iter++;
            while (s[iter] == one) {
                n++;
                iter++;
            }
        }
        return n;
    }
};

// @lc code=end
