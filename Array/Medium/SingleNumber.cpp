#include <bits/stdc++.h>
using namespace std;

// Optimized Approach - Iteration 1
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
    public:
        int singleNumber(vector<int>& nums) {
            int res = 0;
            for (int i = 0;i < nums.size();i++) {
                res = res ^ nums[i];
            }
            return res;
        }
    };