// Time Complexity: O(n)
// Space Complexity: O(n)
class Solution {
    public:
        string reverseWords(string s) {
            vector<string> res;
            string ans = "";
            int i = 0;
            while(i < s.size()) {
                if (s[i] == ' ') {
                    i++;
                }else {
                    string temp = "";
                    while(i < s.size() && s[i] != ' ') {
                        temp += s[i];
                        i++;
                    }
                    res.push_back(temp);
                }
            }
            for (int j = res.size()-1;j >= 0;j--) {
                ans += res[j];
                if (j != 0) {
                    ans += " ";
                }
            }
            return ans;
        }
    };