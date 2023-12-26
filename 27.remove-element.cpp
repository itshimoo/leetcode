// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem27.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int left = 0;
        int right = nums.size()-1;

        while (left <= right)
        {
            // Logic for function
            if(nums[left] == val)
            {
                vector<int>::iterator it = nums.begin() + left;
                nums.erase(it);
                right--;
            }
            else{
                // Handle left/right index
                left++;
            }
        }
        return nums.size();
    }
};
// @lc code=end