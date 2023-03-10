class Solution {
public:
    int jump(vector<int>& nums) {

        /*
            Attempt 1: 
            [2, 3, 1, 1, 4]
            1st -> 2
            2nd -> 3, 1
            3rd -> 1, 4
        */

        int n = nums.size();
        int answer = 0;
        int l = 0, r = 0;

        while (r < n - 1) { // r != n - 1 would fail on certain cases where r goes beyond the array
            int last = 0;
            for(int i = l; i <= r; i++) {
                last = max(last, i + nums[i]);
            }
            l = r + 1;
            r = last;
            answer++;
        }

        return answer;
    }
};