class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        
        /*
            Attempt 1: Recursion
                d[0...n-1] where d[i] is the LIS that ends with the element at index i.
                answer will be max value from d[].

                d[i] = max(1, max_{j < i, a[j] < a[i]}(d[j] + 1))
        
                vector<int> dp(n, 1);
                // vector<int> p(n, -1);

                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < i; j++) {
                        if (nums[j] < nums[i] && d[i] < d[j] + 1) {
                            dp[i] = max(dp[i], dp[j] + 1); // Important Step
                            // p[i] = j;
                        }
                    }
                }

                int answer = dp[0], pos = 0;
                for (int i = 0; i < n; i++) {
                    if (d[i] > ans) {
                        answer = max(answer, dp[i]);
                        // pos = i;
                    }
                }

                // vector<int> subseq;
                // while (pos != -1) {
                //     subseq.push_back(a[pos]);
                //     pos = p[pos];
                // }

            // reverse(subseq.begin(), subseq.end());
            // return subseq;

            return answer;
        */

        /*
            Attempt 2: DP and Binary Search

            class Solution {
            public:
                int lengthOfLIS(vector<int>& a) {
                int n = a.size();
                const int INF = 1e9;
                vector<int> d(n+1, INF);
                d[0] = -INF;

                for (int i = 0; i < n; i++) {
                    int l = upper_bound(d.begin(), d.end(), a[i]) - d.begin();
                    if (d[l-1] < a[i] && a[i] < d[l])
                        d[l] = a[i];
                }

                int ans = 0;
                for (int l = 0; l <= n; l++) {
                    if (d[l] < INF)
                        ans = l;
                }
                return ans;
                }
            };
        */
        
    }
};