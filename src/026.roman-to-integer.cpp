#include <algorithm>
#include <vector>

class Solution {
   public:
    int removeDuplicates(std::vector<int>& nums) {
        std::vector<int>::iterator nums_unique =
            std::unique(nums.begin(), nums.end());

        return std::distance(nums.begin(), nums_unique);
    }
};
