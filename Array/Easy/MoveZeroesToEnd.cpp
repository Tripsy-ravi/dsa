#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach - Iteration 1
// Time Complexity: O(2n)
// Space Complexity: O(1)

class Solution {
    public:
        void moveZeroes(vector<int>& nums) {
            int j = 0;
            int firstZero = nums.size();
            for (int i = 0;i < nums.size();i++) {
                if (nums[i] == 0) {
                    firstZero = i;
                    break;
                }
            }
            j = firstZero;
            for (int i = firstZero+1;i < nums.size();i++) {
                if (nums[i] == 0) {
                    continue;
                }else {
                    int temp = nums[j];
                    nums[j] = nums[i];
                    nums[i] = temp;
                    j++;
                }
            }
        }
    };