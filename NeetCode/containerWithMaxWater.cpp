class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();

        /*
            Attempt 1: Brute Force O(n^2) TLE
        
            int area = 0;
            for (int i = 0; i < n; i++) {
                for (int j = i+1; j < n; j++) {
                    area = max(area, (j-i) * min(height[j], height[i]));
                }
            }
            
            return area;
        */

        /*
            Attempt 2: Maximizing Height
         
            int l = 0;
            int r = n-1;
            int area = 0;
            while (l < r) {
                area = max(area, (r-l) * min(height[r], height[l]));
                if (height[l] < height[r]) {
                    l++;
                }
                else {
                    r--;
                }
            }

            return area;
        */
        
    }
};