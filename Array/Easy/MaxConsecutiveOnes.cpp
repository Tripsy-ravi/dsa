#include <bits/stdc++.h>
using namespace std;

// Optimized Approach - Iteration 1
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
    public:
        int findMaxConsecutiveOnes(vector<int>& nums) {
            int count = 0;
            int maxCount = 0;
            for (int i = 0;i < nums.size();i++) {
                if (nums[i] == 1) {
                    count++;
                }else {
                    maxCount = max(count, maxCount);
                    count = 0;
                }
            }
            return max(maxCount, count);
        }
    };