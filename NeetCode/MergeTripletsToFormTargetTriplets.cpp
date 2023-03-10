class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        vector<vector<int>> p;
        int first = 0;
        int second = 0;
        int third = 0;
        
        for (int i = 0; i < triplets.size(); i++) {
            if (triplets[i][0] > target[0] || triplets[i][1] > target[1] || triplets[i][2] > target[2]) {
                continue;
            }
            else {
                p.push_back(triplets[i]);
            }
        }

        for (int i = 0; i < p.size(); i++) {
            if (p[i][0] == target[0]) {
                first = 1;
            }
            if (p[i][1] == target[1]) {
                second = 1;
            }
            if (p[i][2] == target[2]) {
                third = 1;
            }
        }

        // for (int i = 0; i < p.size(); i++) {
        //     cout << p[i][0] << " " << p[i][1] << " " << p[i][2] << endl;
        // }
        
        if (first && second && third) {
            return true;
        }
        return false;
    }
};