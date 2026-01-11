#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach - Iteration 1 (Use string substring function to make it optimized)
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
    public:
        string largestOddNumber(string num) {
            string res = "";
            int pivot = -1;
            for (int i = num.size()-1;i >= 0;i--) {
                int temp = num[i] - '0';
                if (temp%2 != 0) {
                    pivot = i;
                    break;
                }
            }
            for (int i = 0;i <= pivot;i++) {
                res += num[i];
            }
            return res;
        }
};