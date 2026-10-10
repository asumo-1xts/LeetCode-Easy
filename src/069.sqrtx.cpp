#include <array>
#include <cstdint>

class Solution {
   public:
    int mySqrt(int x) {
        if (x == 0) return 0;

        uint32_t left = 1, right = x;

        while (left <= right) {
            uint32_t mid = (right + left) / 2;
            if (mid <= x / mid) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return static_cast<int>(right);
    }
};