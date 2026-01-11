#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach - Iteration 1

// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            int j = 0;
            for (int i = 0;i < nums.size();i++) {
                if (nums[i] == nums[j]) {
                    continue;
                }else {
                    nums[j+1] = nums[i];
                    j++;
                }
            }
            return j+1;
        }
    };