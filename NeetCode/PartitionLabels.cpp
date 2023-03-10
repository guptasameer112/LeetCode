class Solution {
public:
    vector<int> partitionLabels(string s) {
        map<char, int> mp;
        vector<int> p;

        for (int i = 0; i < s.size(); i++) {
            mp[s[i]] = max(mp[s[i]], i);
        }
        
        int store = 0;
        int end = 0;
        for (int i = 0; i < s.size(); i++) {
            store++;
            end = max(end, mp[s[i]]);

            if (end == i) { // This is the important part, because if this is true then all of the letters are present within this last one.
                p.push_back(store);
                store = 0;
            }
        }

        return p;
    }
};