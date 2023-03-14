class Solution {
public:
    bool isPalindrome(string s) {
        string s2 = "";
        for(int i = 0; i < s.size(); i++) {
            if (isalnum(s[i])) {
                s2 += tolower(s[i]);
            }
        }
        cout << s2 << endl;
        int i = 0;
        int j = s2.size() - 1;
        while (i < j) {
            if (s2[i] != s2[j]) {
                return false;
            }
            i++;
            j--;
        }

        return true;
    }
};