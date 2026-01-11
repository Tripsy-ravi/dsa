#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach - Iteration 1
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            vector<int> maxVal(prices.size(), 0);
            maxVal[prices.size()-1] = prices[prices.size()-1];
            for (int i = prices.size()-2;i >= 0;i--) {
                maxVal[i] = max(maxVal[i+1], prices[i]);
            }
            int ans = 0;
            for (int i = 0;i < prices.size();i++) {
                ans = max(ans, maxVal[i] - prices[i]);
            }
            return ans;
        }
};

// Optimized Approach - Iteration 1
// Time Complexity: O(n)
// Space Complexity: O(1)


class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int maxVal = prices[prices.size()-1];
            int ans = 0;
            for (int i = prices.size()-1;i >= 0;i--) {
                ans = max(ans, maxVal - prices[i]);
                maxVal = max(maxVal, prices[i]);
            }
            return ans;
        }
    };