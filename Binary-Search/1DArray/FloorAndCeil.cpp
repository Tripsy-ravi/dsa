// Time Complexity: O(2*logn)
// Space Complexity: O(1)

class Solution {
    public:
        vector<int> getFloorAndCeil(vector<int> nums, int x) {
        int ceil = -1;
        int floor = -1;
    
        int low = 0, high = nums.size() - 1;
    
        // Find ceil
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == x) {
                ceil = nums[mid];
                break;
            } else if (nums[mid] > x) {
                ceil = nums[mid];
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
    
        low = 0;
        high = nums.size() - 1;
    
        // Find floor
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == x) {
                floor = nums[mid];
                break;
            } else if (nums[mid] < x) {
                floor = nums[mid];
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
    
        return {floor, ceil};
    }
    };