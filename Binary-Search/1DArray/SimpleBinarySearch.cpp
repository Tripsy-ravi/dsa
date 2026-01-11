// Time Complexity: O(logn)
// Space Complexity: O(1)
class Solution {
    public:
        int search(vector<int>& nums, int target) {
            int lowerInd = 0;
            int higherInd = nums.size() - 1;
            while(lowerInd <= higherInd) {
                long long int ind = (lowerInd + higherInd) / 2;
                if(nums[ind] == target) return ind;
                else if(nums[ind] < target) {
                    lowerInd = ind + 1;
                }else {
                    higherInd = ind - 1;
                }
            }
            return -1;
        }
    };