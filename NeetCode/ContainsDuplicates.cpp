class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();

        /*
            Attempt 1: Bruce Force (TLE)
            
            for (int i = 0; i < n; i++) {
                for (int j = i + 1; j < n; j++) {
                    if (nums[i] == nums[j]) {
                        return true;
                    }
                }
            }

            return false;
        */
        
        /*
            Attempt 2: Sorted (TLE)

            sort(nums.begin(), nums.end());

            for (int i = 0; i < n; i++) {
                    for (int j = i + 1; j < n; j++) {
                        if (nums[i] == nums[j]) {
                            return true;
                        }
                    }
                }

            return false;
        */

        /* 
            Attempt 3: Can also be done using a vector (but TLE)
            
            set<int> s;
            for(int i = 0; i < n; i++) {
                s.insert(nums[i]);
            }

            if (s.size() == n) {
                return false;
            }
            return true;
        */
    }
};