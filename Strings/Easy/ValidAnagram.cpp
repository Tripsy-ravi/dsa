// Time Complexity: O(3*n)
// Space Complexity: O(n)

class Solution {
    public:
        bool isAnagram(string s, string t) {
            if(s.size() != t.size()) return false;
            unordered_map<char, int> um;
            for(int i = 0;i < s.size();i++) {
                um[s[i]]++;
            }
            for(int i = 0;i < t.size();i++) {
                um[t[i]]--;
            }
    
            for(int i = 0;i < s.size();i++) {
                if (um[s[i]] != 0) {
                    return false;
                }
            }
            return true;
        }
};

// Optimized Approach - Iteration 1
// Time Complexity: O(n)
// Space Complexity: O(1)


class Solution {
    public:
        bool isAnagram(string s, string t) {
            if(s.size() != t.size()) return false;
            vector<int> arr(26,0);
            for (int i = 0;i < s.size();i++) {
                arr[s[i] - 'a']++;
                arr[t[i] - 'a']--;
            }
            for (int i = 0;i < arr.size();i++) {
                if (arr[i] != 0) {
                    return false;
                }
            }
            return true;
        }
    };