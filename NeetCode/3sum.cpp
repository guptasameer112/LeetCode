class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> answer;
        sort(nums.begin(), nums.end());

        /*
            Attempt 1: Missed a lot of things. (Don't have to only check for negativites in the start, close yet so far)
            
            vector<vector<int>> threeSum(vector<int>& nums) {
            int n = nums.size();
            vector<vector<int>> answer;

            sort(nums.begin(), nums.end());
            
            for (int i = 0; i < n; i++) {
                vector<int> add;
                if (nums[i] < 0) {
                    int j = i + 1;
                    int k = n - 1;
                    if (nums[i] + nums[j] + nums[k] == 0) {
                        add.push_back(nums[i]);
                        add.push_back(nums[j]);
                        add.push_back(nums[k]);
                        answer.push_back(add);
                        add.clear();
                    }
                    else if (nums[i] + nums[j] + nums[k] > 0) {
                        k--;
                    }
                    else {
                        j++;
                    }
                }
            }

            return answer;
        */

        /*
            Attempt 2:

        */
        
        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i-1]){
                continue;
            }

            int l = i+1, r = n-1;
            while (l < r) {
                int threeSum = nums[i] + nums[l] + nums[r];
                if (threeSum > 0) {
                    r -= 1;
                }
                else if (threeSum < 0) {
                    l += 1;
                }
                else {
                    vector<int> temp; // I think this clears the vector itself
                    temp.push_back(nums[i]);
                    temp.push_back(nums[l]);
                    temp.push_back(nums[r]);
                    answer.push_back(temp);
                    l += 1;
                    while (nums[l] == nums[l-1] && l < r) {
                        l += 1; // helps avoid similar pairs, missed this.
                    }
                }
            }
        } 

        return answer;
    }
};
