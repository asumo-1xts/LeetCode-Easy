/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start

#include <algorithm>
#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> nums_ori = nums;  // 元の配列を保存しておく

        sort(nums.begin(), nums.end());  // 昇順にソート
        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            if (nums[left] + nums[right] < target) {
                left++;
            } else if (nums[left] + nums[right] > target) {
                right--;
            } else {
                break;
            }
        }

        // 元の配列からインデックスを取得
        int idx1 = distance(nums_ori.begin(),
                            find(nums_ori.begin(), nums_ori.end(), nums[left]));
        // 被りを避けるため終端から走査
        // イテレータはスカラーではなくベクトルであり、.base()で反転できる！
        int idx2 = distance(
            nums_ori.begin(),
            find(nums_ori.rbegin(), nums_ori.rend(), nums[right]).base() - 1);

        return {idx1, idx2};
    }
};

// int main() {
//     Solution s;
//     vector<int> nums = {3, 2, 4};
//     int target = 6;
//     vector<int> result = s.twoSum(nums, target);
//     cout << "[" << result[0] << ", " << result[1] << "]"
//          << endl;  // 出力: [1, 2]
//     return 0;
// }

// @lc code=end
