#include <bits/stdc++.h>
using namespace std;

// Optimized Approach - Iteration 1
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
    public:
        int missingNumber(vector<int>& nums) {
            int maxNum = nums.size();
            int res = 0;
            for (int i = 0;i <= maxNum;i++) {
                if (i == maxNum) {
                    res = res ^ i;
                }else {
                    res = res ^ i ^ nums[i];
                }
            }
            return res;
        }
    };