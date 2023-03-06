class Solution {
public:
    int rob(vector<int>& nums) {
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
};