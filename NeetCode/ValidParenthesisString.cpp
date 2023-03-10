class Solution {
    // Good question
public:
    bool checkValidString(string s) {
        int leftMin = 0;
        int leftMax = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                leftMin++;
                leftMax++;
            }
            else if (s[i] == '*') {
                leftMin--;
                leftMax++;
            }
            else {
                leftMin--;
                leftMax--;
            }

            if (leftMin < 0) {
                leftMin = 0;
            }   

            if (leftMax < 0) { // LeftMax might become negative somewhere in the process.
            return false;
            }
        }      

        return (leftMin == 0);
    }
};