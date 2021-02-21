/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> diffMap;
        for (std::size_t i = 0; i < nums.size(); ++i) {
            auto itr = diffMap.find(target - nums[i]);
            if (itr != diffMap.end()) {
                vector<int> result {itr->second, static_cast<int>(i)};
                return result;
            }

            diffMap[nums[i]] = i;
        }

        return vector<int>();
    }
};

// @lc code=end
