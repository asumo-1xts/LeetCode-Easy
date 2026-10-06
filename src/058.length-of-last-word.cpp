#include <algorithm>
#include <string>

class Solution {
   public:
    int lengthOfLastWord(std::string s) {
        int count = 0;

        while (!s.empty() && s.back() == ' ') {
            s.pop_back();
        }

        while (!s.empty() && s.back() != ' ') {
            count++;
            s.pop_back();
        }

        return count;
    }
};