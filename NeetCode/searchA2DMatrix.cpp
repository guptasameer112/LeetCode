class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int> search;
        for (int i = 0; i < matrix.size(); i++) {
            if (matrix[i][0] <= target && matrix[i][matrix[0].size() - 1] >= target) {
                for (int  j = 0; j < matrix[0].size(); j++) {
                    search.push_back(matrix[i][j]);
                }
                break;
            }
        }

        int n = search.size();
        int l = 0;
        int r = n - 1;

        while (l <= r) {
            int mid = ((r + l) / 2);
            if (search[mid] == target) {
                // cout << search[mid];
                return true;
            }
            else if (search[mid] > target) {
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }

        return false;
    }
};