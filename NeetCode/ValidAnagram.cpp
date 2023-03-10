class Solution {
public:
    bool isAnagram(string s, string t) {
        if (size(s) != size(t)) {
            return false;
        }
        int n = size(s) ;
        cout << n << endl;
        for (int i = 0; i < n; i++) {
            char k = s[i];
            while (count(s.begin(), s.end(), k) != count(t.begin(), t.end(), k)) {
                return false;
            }
        }

        return true;
    }
};