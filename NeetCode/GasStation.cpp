class Solution {
public:

    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        /*
            Attempt 1: Failed due to complexity in code

                1. pair<gas, cost>
                2. sort according to cost
                3. loop through and check if current_gas += pair.first - pair.second < 0, if it does return -1
                4. return the index of the first pair from the original vector (requires the complex part.)

            Side note: Sort vector of pairs using second element in the pair
                sort(v.begin(), v.end(), [](const pair<int,int> &left, const pair<int,int> &right) {
                    return left.second < right.second;  
                });
        */


        /*
            Attempt 2:
            Think about it not as a circular array but as one where if we have > 0 fuel at the end then we have our answer,
            this changes the question into a 1D array.
        */
        
        int n = gas.size();
        int totalGas = 0, totalCost = 0, currGas = 0, start = 0;
        for (int i = 0; i < n; i++) {
            totalGas += gas[i];
            totalCost += cost[i];

            currGas += gas[i] - cost[i];
            if (currGas < 0) {
                start = i + 1;
                currGas = 0;
            }
        }

        if (totalGas < totalCost) {
            return -1;
        }
        return start;
    }
};