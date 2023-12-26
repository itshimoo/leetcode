// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem26.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        // Two Pointer Algorithm
        // Init both pointers
        // nums = [0,0,1,1,1,2,2,3,3,4]
        //     left^ ^right
        // nums = [0,1,1,1,2,2,3,3,4]
        //        l^ ^r
        // nums = [0,1,1,1,2,2,3,3,4]
        //          l^ ^r
        // nums = [0,1,1,2,2,3,3,4]
        //          l^ ^r
        int left = 0;
        int right = 1;

        // loop through the elements and check if they duplicates
        while (left < nums.size() - 1)
        {

            // Logic to handle vector and erase values
            if (nums[left] == nums[right])
            {
                vector<int>::iterator it = nums.begin() + left;
                nums.erase(it);
            }
            else
            {
                right++;
                left++;
            }
        }

        // Time complexity O(n^2)
        /*
            The time complexity of the algorithm you provided is O(n^2), where n is the number of elements in the nums vector. This is because, in the worst case, you iterate through the vector in a nested loop structure, where the outer loop iterates from left = 0 to left = nums.size() - 2 (i.e., n - 2 iterations), and the inner loop iterates from right = 1 to right = nums.size() - 1 (i.e., n - 1 iterations), resulting in a total of (n - 2) * (n - 1) iterations.

            Here's the breakdown of the time complexity:

            The outer loop iterates from left = 0 to left = nums.size() - 2, which means it performs n - 1 iterations.

            For each iteration of the outer loop, the inner loop iterates from right = 1 to right = nums.size() - 1, which means it performs n - 1 iterations.

            Inside the inner loop, you compare elements nums[left] and nums[right] for equality and possibly erase elements if they are equal.

            The worst-case scenario occurs when no elements are erased, and the inner loop performs n - 1 iterations for each of the n - 1 iterations of the outer loop, resulting in a total of (n - 2) * (n - 1) iterations, which simplifies to O(n^2) in terms of time complexity.

            This algorithm has a quadratic time complexity and may not be efficient for large input arrays as it performs a large number of element comparisons and potential erasures. If the goal is to remove duplicates from a sorted array, there are more efficient algorithms with a linear time complexity of O(n).
        */
        return nums.size();
    }
};
// @lc code=end
