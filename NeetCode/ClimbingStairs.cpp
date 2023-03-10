class Solution {
public:
    int climbStairs(int n) {
      if (n == 0 || n == 1) {
        return 1;
      }  

      else {
        vector<int> dp (n + 1, 0);
        // dp[i] - number of ways to climb i th stair

        dp[1] = 1;
        dp[2] = 2;

        // dp[0] = 1; dp[1] = 1;

        for(int i = 3; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[n];
      }

    }
};