class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        string res = "";
        int res_len = 0;

        for (int i = 0; i < n; i++) {
            // Odd Case
            int l = i;
            int r = i;
            while (l >= 0 && r < n && (s[l] == s[r])) {
                if (r - l + 1 > res_len) {
                    res = s.substr(l, r - l + 1);
                    res_len = r - l + 1;
                }
                l--;
                r++;
            }

            // Even Case
            l, r = i, i + 1;
            while (l >= 0 && r < n && (s[l] == s[r])) {
                if (r - l + 1 > res_len) {
                    res = s.substr(l, r - l + 1);
                    res_len = r - l + 1;
                }
                l--;
                r++;
            }
        }

        return res;
    }
};