class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        if (nums.size() == 1) {
            return nums[0];
        }

        int res = 0;
        for (int i = 0; i < n; i++) {
            res = max(res, nums[i]);
        }

        int min_till = 1;
        int max_till = 1;

        for (int i = 0; i < n; i++) {
            int num_i = nums[i];
            if (num_i == 0) {
                min_till = 1;
                max_till = 1;
            }
            else {
                int temp = max_till * num_i;
                max_till = max(num_i * max_till, num_i * min_till);
                max_till = max(max_till, num_i);
                min_till = min(temp, num_i * min_till);
                min_till = min(min_till, num_i);
                res = max(res, max_till);
            }
        }
        
        return res;
    }
};