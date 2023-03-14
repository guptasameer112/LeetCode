class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        string res = "";
        int res_len = 0;

        /*
            Attempt 1: Messes on some cases (Wrong)
            
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
        */

        /*
            Attempt 2:
            
            int begin = 0;
            int length = 1;
            
            for (int i = 0; i < n; i++) {
                int right = i;
                while (right < n && s[i] == s[right]) {
                    right += 1; // "aaa"
                }

                int left = i - 1;
                while (left >= 0 && right < n && s[left] == s[right]) {
                    left -= 1;
                    right += 1;

                }

                int temp_length = right - left - 1;
                if (length < temp_length) {
                    length = temp_length;
                    begin = left + 1;
                }
            }

            cout << begin << " " << length;
            return s.substr(begin, length);
        */

    }
};