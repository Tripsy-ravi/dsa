// Time Complexity: O(logn)
// Space Complexity: O(1)

class Solution {
    public:
        vector<int> searchRange(vector<int>& nums, int target) {
            int floor = -1;
            int ceil = -1;
            int low = 0;
            int high = nums.size() - 1;
            while (low <= high) {
                int ind = low + (high - low)/2;
                if(nums[ind] == target) {
                        floor = ind;
                        high = ind - 1;
                }else if (nums[ind] > target) {
                    high = ind - 1;
                }else {
                    low = ind + 1;
                }
            }
            low = 0;
            high = nums.size() - 1;
            while (low <= high) {
                int ind = low + (high - low)/2;
                if(nums[ind] == target) {
                        ceil = ind;
                        low = ind + 1;
                }else if (nums[ind] > target) {
                    high = ind - 1;
                }else {
                    low = ind + 1;
                }
            }
    
                return {floor, ceil};
        }
    };