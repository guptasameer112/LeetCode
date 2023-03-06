class Solution {
public:
    int selection(vector<int>& nums) {
        // It is the same as ball selection, we will either pick the last house or we shall not as you cannot pick adjacent houses
        // answer is maximum of (last house picked, last house not picked)

        int n = nums.size();

        vector<int> dp(n + 1, 0);
        // dp[i] - maximum amount of money obtained robbing upto i th house
        // return max(dp[n])

        dp[0] = 0;
        dp[1] = nums[0];

        for(int i = 2; i <= n; i++) {
            dp[i] = max(dp[i-1], dp[i-2] + nums[i-1]);
        }

        return dp[n];
    }
    int rob(vector<int>& array) {
        int n = array.size();
        if (n == 0) {
            return 0;
        }
        if (n == 1) {
            return array[0];
        }
        if (n == 2) {
            return max(array[0], array[1]);
        }
        
        vector<int> array1;
        vector<int> array2;

        for(int i = 0; i < n-1; i++) {
            array1.push_back(array[i]);
        }
        for(int i = 1; i < n; i++) {
            array2.push_back(array[i]);
        }

        int ans1 = selection(array1);
        int ans2 = selection(array2);
        return max(ans1, ans2);
    }
};