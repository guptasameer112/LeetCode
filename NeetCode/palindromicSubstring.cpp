class Solution {
public:
    int countSubstrings(string s) {
        int n = s.size();
        int count = 0;

        /*
            Attempt 1:

            for (int i = 0; i < n; i++) {
                // Odd Case
                int l = i;
                int r = i;
                while (l >= 0 && r < n && (s[l] == s[r])) {
                    count++;
                    cout << s.substr(l, r - l + 1) << endl;
                    l--;
                    r++;
                }

                // Even Case
                l, r = i, i + 1;
                while (l >= 0 && r < n && (s[l] == s[r])) {
                    count++;
                    cout << s.substr(l, r - l + 1) << endl;
                    l--;
                    r++;
                }
            }
        */

        /*
            Attempt 2:
            
            // Odd Palindromes
            for (int i = 0; i < n; i++) {
                int l = i-1;
                int r = i+1;
                count++;
                while (l >= 0 && r < n) {
                    if ((s[l] == s[r])) {
                        count++;
                        l--;
                        r++;
                    }
                    else {
                        break;
                    }
                }
            }

            // Even Palindromes
            for (int i = 0; i < n - 1; i++) {
                int l = i;
                int r = l + 1;

                while (l >= 0 && r < n) {
                    if (s[l] == s[r]) {
                        count++;
                        l--;
                        r++;
                    }
                    else {
                        break;
                    }
                }
            }
        */


        return count;
    }
};
