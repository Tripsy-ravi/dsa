// Time Complexity: O(logn)
// Space Complexity: O(1)

// For lower bound, keep lowering higherInd until lowerInd == higherInd, else return array size
// For upper bound, keep raising lowerInd until lowerInd == higherInd, else return array size
class Solution {
    public:
        int searchInsert(vector<int>& nums, int target) {
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
                return lowerInd;
        }
    };