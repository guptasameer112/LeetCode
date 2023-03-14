class Solution {
public:
    int longestCommonSubsequence(string a, string b) {
    int asize = a.size();
    int bsize = b.size();

    vector<vector<int>> dp (asize + 1, vector<int>(bsize + 1, 0));

    for (int i = 1; i < asize + 1; i++) {
        for (int j = 1; j < bsize + 1; j++) {
            dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
            if (a[i - 1] == b[j - 1]) {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + 1);
            }
        }
    }

    string answer;
    int i = asize, j = bsize;

    while (i && j) {
        if (a[i - 1] == b[j - 1]) {
            answer += a[i - 1];
            i--, j--;
        }
        else if (dp[i][j - 1] >= dp[i - 1][j]) {
            j--;
        }
        else i--;
    }

    return answer.size();
    }
};