#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach - Iteration 1
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
    public:
        void rotate(vector<int>& nums, int k) {
            vector<int> res(nums.size(), 0);
            for (int i = 0;i < nums.size();i++) {
                res[(i + k)%nums.size()] = nums[i];
            }
            for (int i = 0;i < res.size();i++) {
                nums[i] = res[i];
            }
        }
};

// Additional Problem - Rotate Array to Left by N
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
    public:
        void rotate(vector<int>& nums, int k) {
            vector<int> res(nums.size(), 0);
            for (int i = 0;i < nums.size();i++) {
                res[(i - k + nums.size())%nums.size()] = nums[i];
            }
        }
};