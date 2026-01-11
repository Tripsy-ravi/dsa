#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach - Iteration 1

// Time Complexity: O(n)
// Space Complexity: O(n)
class Solution {
    public:
        bool check(vector<int>& nums) {
            int pivot = 0;
            vector<int> res(nums.size());
            for (int i = 0;i < nums.size()-1;i++) {
                if (nums[i+1] < nums[i]) {
                    pivot = i+1;
                    break;
                }
            }
            for (int i = 0;i < nums.size();i++) {
                int index = (i + pivot) % nums.size();
                res[i] = nums[index];
            }
    
            for (int i = 0;i < res.size()-1;i++) {
                if (res[i+1] < res[i]) {
                    return false;
                }
            }
            return true;
        }
};