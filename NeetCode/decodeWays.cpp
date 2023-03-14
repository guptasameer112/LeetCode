class Solution {
public:
    int numDecodings(string s) {
        /*
            Creating map
            int n = s.size();
            int count = 0;
            string num;

            unordered_map<int, char> mp;
            mp[1] = 'a';
            for (int i = 2; i < 27; i++) {
                mp[i] = (int)'a' + (i-1);
            }
        */

        /*
            Attempt 1: Recursion
            if (s.empty()) {
                return 0;
            }
            return numDecodings(s, 0);
        */

        /*
            Attempt 2: Memoization
        */

        int n = s.size();
        vector<int> mem(n + 1, -1);
        mem[n] = 1;
        
        if (s.empty()) {
            return 0;
        }
        return num(mem, s, 0);
        
    }

    int numDecodings(string& s, int pos) {
        int n = s.size();
        
        if (pos == n) return 1;
        if (s[pos] == '0') return 0;

        int res = numDecodings(s, pos + 1);
        if (pos < n - 1 && (s[pos] == '1' || (s[pos] == '2' && s[pos + 1] < '7'))) {
            res += numDecodings(s, pos + 2);
        }
        return res;
    }

    int num(vector<int> &mem, string &s, int pos) {
        if (mem[pos] > -1) return mem[pos];
        if (s[pos] == '0') return mem[pos] = 0;
        int res = num(mem, s, pos + 1);
        if (pos < s.size() - 1 && (s[pos] == '1' || s[pos] == '2' && s[pos + 1] < '7')) {
            res += num(mem, s, pos + 2);
        }

        return mem[pos] = res;
    }
};