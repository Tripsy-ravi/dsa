#include <bits/stdc++.h>
using namespace std;

// Optimized Approach - Iteration 1
// Time Complexity: O(n)
// Space Complexity: O(1)


class Solution {
    public:
        int maxSubArray(vector<int>& nums) {
            int maxAns = INT_MIN;
            int tempAns = 0;
            for (int i = 0;i < nums.size();i++) {
                tempAns += nums[i];
                maxAns = max(maxAns, tempAns);
                if (tempAns < 0) {
                    tempAns = 0;
                }
            }
    
            return maxAns;
        }
    };