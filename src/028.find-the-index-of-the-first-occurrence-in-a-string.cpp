#include <string>

class Solution {
   public:
    int strStr(std::string haystack, std::string needle) {
        size_t pos = haystack.find(needle);
        return (pos == std::string::npos) ? -1 : static_cast<int>(pos);
    }
};