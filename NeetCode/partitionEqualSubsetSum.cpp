class Solution {
public:
    bool canPartition(vector<int>& nums) {
    int n = nums.size();
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    } 

    /* Problem: it is taking into consideration the last added number as well */
    /*
        Attempt 1: TLE
        if (sum % 2 == 0) {
            set<int> s;
            s.insert(0);
            for (int i = 0; i < n; i++) {
                set<int> s2;
                for (auto j: s) {
                    s2.insert(nums[i] + j); 
                }
                for (auto j: s2) {
                    s.insert(j);
                }
            }

            for (auto j : s) {
                if (j == sum / 2) {
                    return true;
                }
            }
        }

        return false;
    */

    /* 
        Attempt 2: Using DP 
            dp[i][j]: sum j can be obtained from first i numbers.
            dp[i][j] = {dp[i-1][j], if dp[i] is not a part
                        dp[i-1][j-nums[i]], if dp[i] is a part}   
    */
    
    if (sum % 2 == 0) {
        sum /= 2;
        vector<bool> dp(sum + 1, false);
        dp[0] = true;
        
        for(int num : nums) {
            for (int i = sum; i > 0; i--) {
                if (i >= num) {
                    dp[i] = dp[i] || dp[i - num];
                }
            }
        }

        return dp[sum];
        }
    return false;
    }
};


// ----------------------------------------------------------

// # include <iostream>
// # include <bits/stdc++.h>
// # include <string>
// # include <vector>
// # include <set>
// # define INF 1e9
// # define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
// # define fr(a, b, i) for(int i = a; i < b; i++)
// # define printArray(array) for(auto edge: array) {cout << edge << " ";}
// # define all(x) x.begin(),x.end() // sort(all(arr))
// # define vi vector<int>
// # define int long long
// # define pb push_back
// # define pii pair<int, int>
// # define seev(v, n) for(int i = 0; i < n; i++) {cin >> x; v.push_back(x);}
// # define sees(s, n) for(int i= 0; i < n; i++) {cin >> x; s.insert(x);}
// const int mod =  1e9 + 7;
// const int mxN = 305;


// // int dp[1000005];

// using namespace std;

// int max(int a, int b) { return (a > b) ? a : b;}

// bool canPartition(vector<int>& nums) {
//     int n = nums.size();
//     int sum = 0;
//     for (int i = 0; i < n; i++) {
//         sum += nums[i];
//     } 

//     /*
//         Attempt 1: 
//     */

//     if (sum % 2 == 0) {
//         set<int> s;
//         s.insert(0);
//         for (int i = 0; i < n; i++) {
//             set<int> s2;
//             for (auto j: s) {
//                 s2.insert(nums[i] + j); 
//                 /* Problem: it is taking into consideration the last added number as well */
//             }
//             for (auto j: s2) {
//                 s.insert(j);
//             }

//             for(auto j: s) {
//                 cout << j << " ";
//             }
//             cout << endl;
//         }

//         for (auto j : s) {
//             if (j == sum / 2) {
//                 return true;
//             }
//         }
//     }

//     return false;
// }

// void solve()
// {
//     int n, m, x, i, j, k;
//     vector<int> nums = {1, 2, 5};
//     if(canPartition(nums)) {
//         cout << "True";
//     }
//     else {
//         cout << "False";
//     }
// }

// signed main()
// {
//     // fast_io;
//     int t;

//     // #ifdef LOCAL
//     //     freopen("input.txt", "r", stdin);
//     //     freopen("output.txt", "w", stdout);
//     // #endif

//     // cin >> t;
//     t = 1;

//     while (t--)
//     {
//         // code here
//         solve();
//     }

//     #ifdef LOCAL
//     clock_t tStart = clock();
//     cerr << fixed<< setprecision(10) << "\nTime Taken: " << (double)(clock()- tStart)/CLOCKS_PER_SEC << endl;
//     #endif

//     return 0;
// }