class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<char> ans;
        int count = 0;

        for (int i = 0; i < s.size(); i++) {

            for (int j = 0; j < ans.size(); j++) {

                if (s[i] == ans[j]) {
                    ans.erase(ans.begin(), ans.begin() + j + 1);
                    break;
                }
            }

            ans.push_back(s[i]);

            count = max(count, (int)ans.size());
        }

        return count;
    }
};